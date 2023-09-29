po = str(input())
su = ""
direction = "N"

if len(po) <= 100:

    for i in po:

        if i == "N":
            if direction == "N":
                su = su + "F"
            if direction == "W":
                su = su + "RF"
            if direction == "S":
                su = su + "RRF"
            if direction == "E":
                su = su + "RRRF"

            direction = "N"
            continue

        if i == "E":
            if direction == "E":
                su = su + "F"
            if direction == "N":
                su = su + "RF"
            if direction == "S":
                su = su + "RRRF"
            if direction == "W":
                su = su + "RRF"
            direction = "E"
            continue

        if i == "S":
            if direction == "S":
                su = su + "F"
            if direction == "E":
                su = su + "RF"
            if direction == "W":
                su = su + "RRRF"
            if direction == "N":
                su = su + "RRF"

            direction = "S"
            continue

        if i == "W":
            if direction == "W":
                su = su + "F"
            if direction == "S":
                su = su + "RF"
            if direction == "N":
                su = su + "RRRF"
            if direction == "E":
                su = su + "RRF"

            direction = "W"
            continue

        if i == "Z":
            su = su + "Z"
            direction = "N"
            continue


print("".join(map(str, su)))