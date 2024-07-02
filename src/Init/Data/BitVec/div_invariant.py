def get_lsb(n, j):
    return int(bool(n & (1 << j)))

def print_bits(w, n):
    return ("{0:0%sb}" % (w)).format(n)

def shift_subtract(w, n, d, q, r, j):
    print(f"shift_subtract> n: '%s' | d: '%s' | q : '%s' | r : '%s' | j : '%s'" % 
          (print_bits(w, n), print_bits(w, d), print_bits(w, q), print_bits(w, r), j))
    print(f"  j[%s] = %s" % (j, get_lsb(n, j)))
    r = (r << 1) | get_lsb(n, j)
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
    if j == 0:
        return (q, r)
    else:
        return shift_subtract(w, n, d, q, r, j-1)

# 10 / 3 = 3
for n in range(1, 10):
    for d in range(1, 10):
        w = 4
        (q, r) = shift_subtract(w, n, d, 0, 0, w)
        assert n == d * q + r
        if n == d * q + r:
            print ("verified correct invariant for n: '%s' | d : '%s' | q : '%s' r: '%s'" % 
                   (n, d, q, r))
        else:
            raise RuntimeError("verification failed for n: '%s' | d: '%s'" % (n, d))

