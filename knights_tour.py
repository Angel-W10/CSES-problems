n = 8
def isvalid(x, y, board):
    if(x>=0 and y>=0 and x<n and y<n and board[x][y] == -1):
        return True
    return False

def print_solution(n, board):
    for i in range(n):
        for j in range(n):
            print(board[i][j], end = " ")
        print()


def KN(x, y):
    board = [[-1 for i in range(n)]for i in range(n)] 

    movex = [2, 1, -1, -2, -2, -1, 1, 2]
    movey = [1, 2, 2, 1, -1, -2, -2, -1]

    board[x][y] = 0

    pos = 1   

    if (KNhelper(x, y, movex, movey, pos, board)):
       print_solution(n, board)


def KNhelper(x, y, movex, movey, pos, board):
    if(pos == n**2):
        return True
    
    for i in range(8):
        nextx = x + movex[i]
        nexty = y + movey[i]
        # print(nextx, nexty)
        if(isvalid(nextx, nexty, board)):
            # print("valid")
            board[nextx][nexty] = pos
            # print("pos: %d"%pos)
            if(KNhelper(nextx, nexty, movex, movey, pos+1, board)):
                return True
            # print("going back!")
            board[nextx][nexty] = -1
    return False


if __name__ == "__main__":
    x,y=map(int,input().split())
    KN(x, y)