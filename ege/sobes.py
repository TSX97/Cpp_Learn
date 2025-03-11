num = int(input()) 
q = num % 10000 // 1000 
w = num % 1000 // 100 
e = num % 100 // 10 
r = num % 10 // 1 
print("qwer") 
 
if w == 0: 
    if q <= e <= r: 
        print(q * 1000 + e * 10 + r * 100) 
    elif q <= r <= e: 
        print(q * 1000 + r * 10 + e * 100) 
    elif e <= q <= r: 
        print(e * 1000 + q * 10 + r * 100) 
    elif e <= r <= q: 
        print(e * 1000 + r * 10 + q * 100) 
    elif r <= e <= q: 
        print(r * 1000 + e * 10 + q * 100) 
    elif r <= q <= e: 
        print(r * 1000 + q * 10 + e * 100) 
 
elif e == 0: 
    if q <= w <= r: 
        print(q * 1000 + w * 10 + r) 
    elif q <= r <= w: 
        print(q * 1000 + r * 10 + w) 
    elif w <= q <= r: 
        print(w * 1000 + q * 10 + r) 
    elif w <= r <= q: 
        print(w * 1000 + r * 10 + q) 
    elif r <= w <= q: 
        print(r * 1000 + w * 10 + q) 
    elif r <= q <= w: 
        print(r * 1000 + q * 10 + w) 
 
elif r == 0: 
    if q <= w <= e: 
        print(q * 1000 + w * 100 + 10 * e) 
    elif q <= e <= w: 
        print(q * 1000 + e * 100 + 10 * w) 
    elif w <= q <= e: 
        print(w * 1000 + q * 100 + 10 * e) 
    elif w <= e <= q: 
        print(w * 1000 + e * 100 + 10 * q) 
    elif e <= w <= q: 
        print(e * 1000 + w * 100 + 10 * q) 
    elif e <= q <= w: 
        print(e * 1000 + q * 100 + 10 * w) 
 
if q<= w<= e<=r: 
    print(q * 1000 + w * 100 + e * 10 + r) 
elif q<= w<= r<=e : 
    print(q * 1000 + w * 100 + r * 10 + w) 
elif q<= e<= w<=r: 
    print(q * 1000 + e * 100 + w * 10 + r) 
elif q<= e<= r<=w: 
    print(q * 1000 + e * 100 + r * 10 + w) 
elif q<= r<= e<=w: 
    print(q * 1000 + r * 100 + e * 10 + w) 
elif q<= r<= w<=e: 
    print(q * 1000 + r * 100 + w * 10 + e) 
elif w<= q<= r<=e: 
    print(w * 1000 + q * 100 + r * 10 + e) 
elif w<= q<= e<=r: 
    print(w * 1000 + q * 100 + e * 10 + r) 
elif w<= e<= q<=r: 
    print(w * 1000 + e * 100 + q * 10 + r) 
elif w<= e<= r<=q: 
    print(w * 1000 + e * 100 + r * 10 + q) 
elif w<= r<= q<=e: 
    print(w * 1000 + r * 100 + q * 10 + e) 
elif w<= r<= e<=q: 
    print(w * 1000 + r * 100 + e * 10 + q) 
elif e<= q<= w<=r: 
    print(e * 1000 + q * 100 + w * 10 + r) 
elif e<= q<= r<=w: 
    print(e * 1000 + q * 100 + r * 10 + w) 
elif e<= w<= q<=r: 
    print(e * 1000 + w * 100 + q * 10 + r) 
elif e<= w<= r<=q: 
    print(e * 1000 + w * 100 + r * 10 + q) 
elif e<= r<= w<=q: 
    print(e * 1000 + r * 100 + w * 10 + q) 
elif e<= r<= q<=w: 
    print(e * 1000 + r * 100 + q * 10 + w) 
elif r<= q<= e<=w: 
    print(r * 1000 + q * 100 + e * 10 + w) 
elif r<= q<= w<=e: 
    print(r * 1000 + q * 100 + w * 10 + e) 
elif r<= w<= e<=q: 
    print(r * 1000 + w * 100 + e * 10 + q) 
elif r<= w<= q<=e: 
    print(r * 1000 + w * 100 + q * 10 + e) 
elif r<= e<= w<=q: 
    print(r * 1000 + e * 100 + w * 10 + q) 
elif r<= e< q<=w: 
    print(r * 1000 + e * 100 + q * 10 + w)
