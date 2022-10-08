def maxclique(file):
    ####  Extracting FromFile and storing in Adjacency List
    f = open(file,'r')
    l = f.readlines()
    sent ={}
    recv = {}
    s = set()
    for line in l:
        if line != '\n':
            x = line.split("    ")[1]
            if x[-1] == '\n':
                x=x[:-1]
            y = line.split("    ")[2]
            if y[-1] == '\n':
                y=y[:-1]
            #print(x,y)
            s.add(x)
            s.add(y)
            if x in sent.keys():
                sent[x].append(y)
            else:
                sent[x]=[]
                sent[x].append(y)
            if y in recv.keys():
                recv[y].append(x)
            else:
                recv[y]=[]
                recv[y].append(x)
    s = sorted(s)
    print(s)
    n = len(s)
    res = []
    
    #### Main Implementation 
    
    for i in range(len(s)-1):
        List = [1]*n
        for j in range(i,len(s)):
            for k in range(j+1,len(s)):
                if List[k]!=0:
                    if s[k] in sent[s[j]] and s[j] in recv[s[k]]:
                        continue
                    else:
                        List[k]=0
        
        t=''
        for l in range(i,n):
            if List[l] ==1:
                t = t+s[l]+' , '
        res.append(t[:-2])
        #print(res)
    List = [1]*len(res)
    for  i in range(len(res)):
        if List[i]!=0:
            for j in range(i+1,len(res)):
                if List[j]!=0:
                    if res[i] in res[j]:
                        List[i] = 0
                    elif res[j] in res[i]:
                        List[j] = 0
    final = []
    for i in range(len(List)):
        if List[i] ==1:
            if len(res[i])>=3:
                final.append(res[i])
    for i in final:
        print(i)



if __name__ == "__main__":
    maxclique('log.txt')
