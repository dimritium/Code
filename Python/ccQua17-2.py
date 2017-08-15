def xyAxis(lis, max_no, n, m):
    x_axis = []
    y_axis = []
    for i in range(n):
        for j in range(m):
            if lis[i][j] == max_no:
                flag = 0
                for k in range(8):
                    if verified(i+x_points[k], j+y_points[k], n, m):
                        if lis[i+x_points[k]][j+y_points[k]] != max_no:
                            flag = 1
                            break;
                if flag == 1:
                    x_axis.append(i)
                    y_axis.append(j)
    return x_axis,y_axis
    
def verified(x, y, n, m):
    if (x >= 0 and x<n) and (y>=0 and y<m):
        return True
    else:
        return False 

def cnt_max(lis, max_no):
    cnt = 0
    for i in lis:
        cnt = cnt+i.count(max_no)
    return cnt
    
x_points = [-1,-1,-1, 0,0, 1,1,1]
y_points = [-1, 0, 1,-1,1,-1,0,1]
tc = int(raw_input())
for i in range(tc):
    n,m = map(int, raw_input().split())
    lis = []
    for i in range(n):
        li = map(int, raw_input().split())
        lis.append(li)
    max_no = 0
    for i in lis:
        max_no = max(max(i),max_no)
    x_axis = []
    y_axis = []
    x_axis,y_axis = xyAxis(lis, max_no, n, m)
    # print x_axis, y_axis
    time = 0
    # print "max",max_no
    # print cnt_max(lis, max_no)
    while(cnt_max(lis, max_no) != n*m):
        for j in range(len(x_axis)):
            for i in range(8):
                if verified(x_axis[j]+x_points[i], y_axis[j]+y_points[i], n, m):
                    lis[x_axis[j]+x_points[i]][y_axis[j]+y_points[i]] = max_no
        x_axis,y_axis = xyAxis(lis, max_no, n, m)
        time = time + 1
    print time
