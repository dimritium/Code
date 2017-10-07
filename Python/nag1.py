n = int(input())
lis = list(map(int,input().split()))
hash_set = {}
for i in lis:
    try:
        hash_set[i]+=1
    except:
        hash_set[i] = 1
final_list = []
for k,v in hash_set.items():
    final_list.append([k,hash_set[k],k*hash_set[k]])
final_list = list(sorted(final_list,key = lambda x:x[2]))
do_not_consider_ = set([])
res_pre = 0
for i in range(len(final_list)):
    if final_list[i][0] not in do_not_consider_:
        res_pre+=final_list[i][2]
        do_not_consider_.add(final_list[i][0]+1)
        do_not_consider_.add(final_list[i][0]-1)
final_list = final_list[::-1]
do_not_consider = set([])
res = 0
for i in range(len(final_list)):
    if final_list[i][0] not in do_not_consider:
        res+=final_list[i][2]
        do_not_consider.add(final_list[i][0]+1)
        do_not_consider.add(final_list[i][0]-1)
print (res)