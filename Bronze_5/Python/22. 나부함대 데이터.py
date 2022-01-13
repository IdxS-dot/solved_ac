
#shipname = [Class, Deployment, In service]
N2bomber = ["N2 Bomber", "Heavy Fighter", "Limited", "21"]
J_Type_327 = ["J-Type 327", "Light Combat",   "Unlimited",  "1"]
NX_Cruiser = ["NX Cruiser", "Medium Fighter",  "Limited", "18"]
N1_Starfighter =  ["N1 Starfighter", "Medium Fighter",  "Unlimited", "25"]
Royal_Cruiser =  ["Royal Cruiser", "Light Combat", "Limited", "4"]

'''
N2 Bomber      Heavy Fighter  Limited    21
J-Type 327     Light Combat   Unlimited  1         
NX Cruiser     Medium Fighter Limited    18        
N1 Starfighter Medium Fighter Unlimited  25        
Royal Cruiser  Light Combat   Limited    4
'''


nabu = {"nabu1": N2bomber, "nabu2" : J_Type_327, "nabu3" : NX_Cruiser, "nabu4" : N1_Starfighter, "nabu5" : Royal_Cruiser}


print("{:<15}{:<15}{:<11}{:<10}".format("SHIP NAME", "CLASS", "DEPLOYMENT", "IN SERVICE"))
print("{:<15}{:<15}{:<11}{:<10}".format(nabu["nabu1"][0], nabu["nabu1"][1], nabu["nabu1"][2], nabu["nabu1"][3]))
print("{:<15}{:<15}{:<11}{:<10}".format(nabu["nabu2"][0], nabu["nabu2"][1], nabu["nabu2"][2], nabu["nabu2"][3]))
print("{:<15}{:<15}{:<11}{:<10}".format(nabu["nabu3"][0], nabu["nabu3"][1], nabu["nabu3"][2], nabu["nabu3"][3]))
print("{:<15}{:<15}{:<11}{:<10}".format(nabu["nabu4"][0], nabu["nabu4"][1], nabu["nabu4"][2], nabu["nabu4"][3]))
print("{:<15}{:<15}{:<11}{:<10}".format(nabu["nabu5"][0], nabu["nabu5"][1], nabu["nabu5"][2], nabu["nabu5"][3]))


# print(nabu["N2 bomber"][1])
# print("{:<15}{:<15}{:<11}{:<10}".format())

