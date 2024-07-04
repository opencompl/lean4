#!/usr/bin/env python3

def get_lsb(n, j):
    return int(bool(n & (1 << j)))

def print_bits(w, n):
    return ("{0:0%sb}" % (w)).format(n)

def check_pre_invariant(w, n, d, q, r, j):
    qright = n // d
    rright = n % d
    assert r < d

# n / d <-> n = q * d + r
def check_post_rec_invariant(w, n, d, q, r, j):
    qright = n // d
    rright = n % d
    assert r < d
    assert n >> (w - j) == d * q + r

# n / d <-> n = q * d + r
def check_final_invariant(w, n, d, q, r, j):
    qright = n // d
    rright = n % d
    assert r < d
    assert n >> ((w - 1) - j) == d * q + r

def shift_subtract(w, n, d, q, r, j):
    print(f"shift_subtract> n: '%s' | d: '%s' | q : '%s' | r : '%s' | j : '%s'" % 
          (print_bits(w, n), print_bits(w, d), print_bits(w, q), print_bits(w, r), j))
    print(f"  n[%s] = %s" % (j, get_lsb(n, j)))
    check_pre_invariant(w, n, d, q, r, j)
    if j > 0:
        (q, r) = shift_subtract(w, n, d, q, r, j-1)
        check_post_rec_invariant(w, n, d, q, r, j)

    # do the last bit.
    ix = (w - 1) - j
    assert ix >= 0
    r = (r << 1) | get_lsb(n, ix)
    print(f"  r = %s" % print_bits(w, r))
    if r >= d:
        print(f"  r > d.")
        r -= d
        q = (q << 1) | 1
        print(f"  r.new = %s" % print_bits(w, r))
        print(f"  q.new = %s" % print_bits(w, q))
    else:
        print(f"  r < d.")
        q = (q << 1)
        print(f"  r.new = %s" % print_bits(w, r))
        print(f"  q = %s" % print_bits(w, q))
    check_final_invariant(w, n, d, q, r, j)
    return (q, r)

# 10 / 3 = 3
for n in range(1, 32):
    for d in range(1, 32):
        w = 6
        (q, r) = shift_subtract(w, n, d, 0, 0, w-1)
        assert n == d * q + r
        if n == d * q + r and r < d:
            print ("verified correct invariant for n: '%s' | d : '%s' | q : '%s' r: '%s'" % 
                   (n, d, q, r))
        else:
            raise RuntimeError("verification failed for n: '%s' | d: '%s'" % (n, d))


