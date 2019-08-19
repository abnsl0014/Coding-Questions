def genPara(oB, cB, n, s = []):
    if cB == n:
        print(' '.join(s));
    
    if cB < oB:
        s.append(')')
        genPara(oB,cB+1,n,s);
        s.pop();
    if oB < n:
        s.append('(');
        genPara(oB+1,cB,n,s);
        s.pop();


x = int(input());
genPara(0, 0, x);
