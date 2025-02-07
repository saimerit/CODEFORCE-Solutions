def Tformat(time):
    hr = int(time[0]+time[1])
    minu = int(time[3]+time[4])
    if (hr>12):
        hr = hr -12
        if(hr > 9):
            print(str(hr)+time[2:]+" PM")
        else:
            print("0"+str(hr)+time[2:]+" PM")
    elif(hr==0):
        if (minu < 10):
            print("12:0"+str(minu)+" AM")
        else:
            print("12:"+str(minu)+" AM")
    else:
        
        if(hr == 12 and minu >=0):
            print(time+ " PM")
        else:
            print(time+" AM")

t = int(input())
while t > 0:
    t1 = input()
    Tformat(t1)
    t -= 1
 