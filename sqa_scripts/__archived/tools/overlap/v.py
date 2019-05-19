import secondQuantizationAlgebra as sqa
import mussardCode

import argparse
parser = argparse.ArgumentParser()
parser.add_argument('-3','--commentE3' ,action='store_true',dest='commentE3' ,help='commentE3')
parser.add_argument('-4','--cumulantE4',action='store_true',dest='cumulantE4',help='cumulantE4')
args       = parser.parse_args()
cumulantE4 = args.cumulantE4
commentE3  = args.commentE3
if cumulantE4 and commentE3:
  print "Cannot have both 'cumulantE4' and 'commentE3'!"
  exit()

import argparse
parser = argparse.ArgumentParser()
parser.add_argument('-3','--commentE3' ,action='store_true',dest='commentE3' ,help='commentE3')
parser.add_argument('-4','--cumulantE4',action='store_true',dest='cumulantE4',help='cumulantE4')
args       = parser.parse_args()
cumulantE4 = args.cumulantE4
commentE3  = args.commentE3
if cumulantE4 and commentE3:
  print "Cannot have both 'cumulantE4' and 'commentE3'!"
  exit()

sqa.options.verbose = False

# USEFUL ROUTINES ---------------------------------------------------------------------------------
# Returns string
# for organization of indexes such as "a^T a a^T a"
def code(list):
  line=''
  for iter in list:
    line=line+iter.name[0]
  return line.lower()

# Returns string
# ressembling that of "code"
# but for organization of indexes such as "a^T a^T a a"
def code_rearrange(list):
  if len(list)==4:
    line=list[0].name[0]+list[2].name[0]+list[1].name[0]+list[3].name[0]
  elif len(list)==2:
    line=code(list)
  else:
    print 'ERROR code_rearrange'
    exit()
  return line.lower()

# Returns [Delta_c,Delta_a,Delta_v]
# from a string assumed to come from "code" or "code_rearrange"
def pattern(string):
  countC=0
  countA=0
  countV=0
  for iter in range(len(string)-1,-1,-1):
    if iter%2==0:
      mult=1
    else:
      mult=-1
    if string[iter]=='c':
      countC=countC+mult
    if string[iter]=='a':
      countA=countA+mult
    if string[iter]=='v':
      countV=countV+mult
  return [countC,countA,countV]

# Outputs the pattern
def output_pattern(string):
  list=pattern(string)
  return '{:3}{:3}{:3}'.format(list[0],list[1],list[2])

# Is the "string" does not change the occupation, then return True
# Give it the total <Psi_0| string |Psi_0> !
def is_non_zero(string):
  list=pattern(string)
  total=abs(list[0])+abs(list[1])+abs(list[2])
  return total==0

# THIS IS WRONG, for now...!!!
def symm(list):
  symm=[]
  #print code(list),[s.pattern for s in symm]
  return symm
  if len(list)==2:
    if list[0].name[0]==list[1].name[0]:
      symm.append(hsym)
  elif len(list)==4:
    if list[0].name[0]==list[2].name[0]:
      symm.append(Dsym_a)
    if list[1].name[0]==list[3].name[0]:
      symm.append(Dsym_b)
    if list[0].name[0]==list[1].name[0] and\
       list[2].name[0]==list[3].name[0]:
      symm.append(Dsym_c)
  #print code(list),[s.pattern for s in symm]
  return symm
# USEFUL ROUTINES ---------------------------------------------------------------------------------




# TENSORS -----------------------------------------------------------------------------------------
tensors  =     [# Amplitudes corresponing to classes
                ['WCvvcc',    'WC',      'eecc',       'A'],
                ['WCvvca',    'WC',      'eeca',       'A'],
                ['WCccav',    'WC',      'ccae',       'A'],
                ['WCvvaa',    'WC',      'eeaa',       'A'],
                ['WCccaa',    'WC',      'ccaa',       'A'],
                ['WCvaca',    'WC',      'eaca',       'A'],
                ['WCavca',    'WC',      'aeca',       'A'],
                ['WCvaaa',    'WC',      'eaaa',       'A'],
                ['WCcaaa',    'WC',      'caaa',       'A'],
                # Amplitudes coWresponding to what I call "heff"
                ['WEvc',      'WE',      'ec',         'A'],
                ['WEcccv',    'WE',      'ccce',       'A'],
                ['WEvvvc',    'WE',      'eeec',       'A'],
                ['WEva',      'WE',      'ea',         'A'],
                ['WEcacv',    'WE',      'cace',       'A'],
                ['WEccav',    'WE',      'ccae',       'A'],
                ['WEvvva',    'WE',      'eeea',       'A'],
                ['WEca',      'WE',      'ca',         'A'],
                ['WEccca',    'WE',      'ccca',       'A'],
                ['WEavcv',    'WE',      'aece',       'A'],
                ['WEvvca',    'WE',      'eeca',       'A'],
                # Amplitudes coWresponding to the class "other"
                ['WOvvcc',    'WO',      'eecc',       'A'],
                ['WOvvca',    'WO',      'eeca',       'A'],
                ['WOccav',    'WO',      'ccae',       'A'],
                ['WOvvaa',    'WO',      'eeaa',       'A'],
                ['WOccaa',    'WO',      'ccaa',       'A'],
                ['WOvaca',    'WO',      'eaca',       'A'],
                ['WOavca',    'WO',      'aeca',       'A'],
                ['WOvaaa',    'WO',      'eaaa',       'A'],
                ['WOcaaa',    'WO',      'caaa',       'A'],
                ['WOvc',      'WO',      'ec',         'A'],
                ['WOcccv',    'WO',      'ccce',       'A'],
                ['WOvvvc',    'WO',      'eeec',       'A'],
                ['WOva',      'WO',      'ea',         'A'],
                ['WOcacv',    'WO',      'cace',       'A'],
                ['WOvvva',    'WO',      'eeea',       'A'],
                ['WOca',      'WO',      'ca',         'A'],
                ['WOccca',    'WO',      'ccca',       'A'],
                ['WOavcv',    'WO',      'aece',       'A'],
                # Same thing with "W"
                # (they are Amplitudes because otherwise they will not show up)
                # (need to change them from Amplitudes to Hamiltonian afterwards)
                ['bvvcc',     'b',       'eecc',       'A'],
                ['bvvca',     'b',       'eeca',       'A'],
                ['bccav',     'b',       'ccae',       'A'],
                ['bvvaa',     'b',       'eeaa',       'A'],
                ['bccaa',     'b',       'ccaa',       'A'],
                ['bvaca',     'b',       'eaca',       'A'],
                ['bavca',     'b',       'aeca',       'A'],
                ['bvaaa',     'b',       'eaaa',       'A'],
                ['bcaaa',     'b',       'caaa',       'A'],
                #
                ['kvc',       'k',       'ec',         'A'],
               #['kcv',       'k',       'ce',         'A'],
                ['Wcccv',     'W',       'ccce',       'A'],
                ['Wvvvc',     'W',       'eeec',       'A'],
                ['kva',       'k',       'ea',         'A'],
               #['kav',       'k',       'ae',         'A'],
                ['Wcacv',     'W',       'cace',       'A'],
                ['Wvvva',     'W',       'eeea',       'A'],
                ['kca',       'k',       'ca',         'A'],
               #['kac',       'k',       'ac',         'A'],
                ['Wccca',     'W',       'ccca',       'A'],
                ['Wavcv',     'W',       'aece',       'A'],
                #
                ['Wvvcc',     'W',       'eecc',       'H'],
                ['Wvvca',     'W',       'eeca',       'H'],
                ['Wccav',     'W',       'ccae',       'H'],
                ['Wvvaa',     'W',       'eeaa',       'H'],
                ['Wccaa',     'W',       'ccaa',       'H'],
                ['Wvaca',     'W',       'eaca',       'H'],
                ['Wavca',     'W',       'aeca',       'H'],
                ['Wvaaa',     'W',       'eaaa',       'H'],
                ['Wcaaa',     'W',       'caaa',       'H'],
                #
                ['E1',        'E1',      'aa',         'D'],
                ['E2',        'E2',      'aaaa',       'D'],
                ['E3',        'E3',      'aaaaaa',     'D'],
                ['E4',        'E4',      'aaaaaaaa',   'D'],
                ['deltac',    'delta',   'cc',         'D'],
                ['deltaa',    'delta',   'aa',         'D'],
                ['deltav',    'delta',   'ee',         'D'],
                ]
# TENSORS -----------------------------------------------------------------------------------------





# Define needed indexes as being core,active,virtual
tag_core    = sqa.options.core_type
tag_active  = sqa.options.active_type
tag_virtual = sqa.options.virtual_type

# For Onu and Omu
i1 = sqa.index('Ci1',  [tag_core],    True)
i2 = sqa.index('Ci2',  [tag_core],    True)
i3 = sqa.index('Ci3',  [tag_core],    True)
i4 = sqa.index('Ci4',  [tag_core],    True)
i5 = sqa.index('Ci5',  [tag_core],    True)
i6 = sqa.index('Ci6',  [tag_core],    True)
i7 = sqa.index('Ci7',  [tag_core],    True)
j1 = sqa.index('Cj1',  [tag_core],    True)
j2 = sqa.index('Cj2',  [tag_core],    True)
j3 = sqa.index('Cj3',  [tag_core],    True)
j4 = sqa.index('Cj4',  [tag_core],    True)
j5 = sqa.index('Cj5',  [tag_core],    True)
j6 = sqa.index('Cj6',  [tag_core],    True)
j7 = sqa.index('Cj7',  [tag_core],    True)
k1 = sqa.index('Ck1',  [tag_core],    True)
k2 = sqa.index('Ck2',  [tag_core],    True)
k3 = sqa.index('Ck3',  [tag_core],    True)
l1 = sqa.index('Cl1',  [tag_core],    True)
l2 = sqa.index('Cl2',  [tag_core],    True)
l3 = sqa.index('Cl3',  [tag_core],    True)

p1 = sqa.index('Ap1',  [tag_active],  True)
p2 = sqa.index('Ap2',  [tag_active],  True)
p3 = sqa.index('Ap3',  [tag_active],  True)
p4 = sqa.index('Ap4',  [tag_active],  True)
p5 = sqa.index('Ap5',  [tag_active],  True)
p6 = sqa.index('Ap6',  [tag_active],  True)
p7 = sqa.index('Ap7',  [tag_active],  True)
p8 = sqa.index('Ap8',  [tag_active],  True)
q1 = sqa.index('Aq1',  [tag_active],  True)
q2 = sqa.index('Aq2',  [tag_active],  True)
q3 = sqa.index('Aq3',  [tag_active],  True)
q4 = sqa.index('Aq4',  [tag_active],  True)
q5 = sqa.index('Aq5',  [tag_active],  True)
q6 = sqa.index('Aq6',  [tag_active],  True)
q7 = sqa.index('Aq7',  [tag_active],  True)
q8 = sqa.index('Aq8',  [tag_active],  True)
r1 = sqa.index('Ar1',  [tag_active],  True)
r2 = sqa.index('Ar2',  [tag_active],  True)
r3 = sqa.index('Ar3',  [tag_active],  True)
r4 = sqa.index('Ar4',  [tag_active],  True)
r5 = sqa.index('Ar5',  [tag_active],  True)
r6 = sqa.index('Ar6',  [tag_active],  True)
s1 = sqa.index('As1',  [tag_active],  True)
s2 = sqa.index('As2',  [tag_active],  True)
s3 = sqa.index('As3',  [tag_active],  True)
s4 = sqa.index('As4',  [tag_active],  True)
s5 = sqa.index('As5',  [tag_active],  True)
s6 = sqa.index('As6',  [tag_active],  True)
u1 = sqa.index('Au1',  [tag_active],  True)
u2 = sqa.index('Au2',  [tag_active],  True)
v1 = sqa.index('Av1',  [tag_active],  True)
v2 = sqa.index('Av2',  [tag_active],  True)

a1 = sqa.index('Va1',  [tag_virtual], True)
a2 = sqa.index('Va2',  [tag_virtual], True)
a3 = sqa.index('Va3',  [tag_virtual], True)
a4 = sqa.index('Va4',  [tag_virtual], True)
a5 = sqa.index('Va5',  [tag_virtual], True)
a6 = sqa.index('Va6',  [tag_virtual], True)
a7 = sqa.index('Va7',  [tag_virtual], True)
b1 = sqa.index('Vb1',  [tag_virtual], True)
b2 = sqa.index('Vb2',  [tag_virtual], True)
b3 = sqa.index('Vb3',  [tag_virtual], True)
b4 = sqa.index('Vb4',  [tag_virtual], True)
b5 = sqa.index('Vb5',  [tag_virtual], True)
b6 = sqa.index('Vb6',  [tag_virtual], True)
b7 = sqa.index('Vb7',  [tag_virtual], True)
c1 = sqa.index('Vc1',  [tag_virtual], True)
c2 = sqa.index('Vc2',  [tag_virtual], True)
c3 = sqa.index('Vc3',  [tag_virtual], True)
d1 = sqa.index('Vd1',  [tag_virtual], True)
d2 = sqa.index('Vd2',  [tag_virtual], True)
d3 = sqa.index('Vd3',  [tag_virtual], True)

# For delta functions
id1 = sqa.index('Cid1',  [tag_core],    True)
id2 = sqa.index('Cid2',  [tag_core],    True)
pd1 = sqa.index('Apd1',  [tag_active],  True)
pd2 = sqa.index('Apd2',  [tag_active],  True)
ad1 = sqa.index('Vad1',  [tag_virtual], True)
ad2 = sqa.index('Vad2',  [tag_virtual], True)

# For H
iX = sqa.index('CiX', [tag_core],    True)
jX = sqa.index('CjX', [tag_core],    True)
kX = sqa.index('CkX', [tag_core],    True)
lX = sqa.index('ClX', [tag_core],    True)
pX = sqa.index('ApX', [tag_active],  True)
qX = sqa.index('AqX', [tag_active],  True)
rX = sqa.index('ArX', [tag_active],  True)
sX = sqa.index('AsX', [tag_active],  True)
aX = sqa.index('VaX', [tag_virtual], True)
bX = sqa.index('VbX', [tag_virtual], True)
cX = sqa.index('VcX', [tag_virtual], True)
dX = sqa.index('VdX', [tag_virtual], True)

# Define delta functions
hsym   = sqa.symmetry((1,0), 1)
Dsym_a = sqa.symmetry((2,1, 0,3), 1)
Dsym_b = sqa.symmetry((0,3, 2,1), 1)
Dsym_c = sqa.symmetry((1,0, 3,2), 1)
deltaC = sqa.tensor('deltac', [id1,id2], [hsym])
deltaA = sqa.tensor('deltaa', [pd1,pd2], [hsym])
deltaV = sqa.tensor('deltav', [ad1,ad2], [hsym])


# Occupation pattern of the classes
ClassNames=['vvcc','vvca','ccav','vvaa','ccaa','vaca','avca','vaaa','caaa']

occupations={}
occupations['vvcc'] =[-2, 0, 2]
occupations['vvca'] =[-1,-1, 2]
occupations['ccav'] =[-2, 1, 1]
occupations['vvaa'] =[ 0,-2, 2]
occupations['ccaa'] =[-2, 2, 0]
occupations['vaca'] =[-1, 0, 1]
occupations['avca'] =[-1, 0, 1]
occupations['vaaa'] =[ 0,-1, 1]
occupations['caaa'] =[-1, 1, 0]
occupations['other']=[-5,-5,-5]
occupations['h0']   =[ 0, 0, 0]

# PS1 ---------------------------------------------------------------------------------------------
#  |Psi1> =         d_mu O  _mu |Psi_0>
#  <Psi1| = <Psi_0| d_mu O^T_mu
#  where:
#   - the indexes of "O_mu" and "O^T_mu" are dictated by the class itself
#       (first 4 and next 4 of "indExOp_Psi1")
#   - the indexes of "d_mu" for each class are to match the unique tensors outputed by PySCF
#       (first 4 and next 4 of "indTens_Psi1")
#   - those tensors are labelled by "names" that are the classes (and not the correspondinng string of indexes types!)
#       (last element of "indTens_Psi1")

# List of indexes for the ExOp:
#              O_mu          O^T_nu   (name)
indExOp_Psi1=[[a1,i1,b1,j1,  l1,d1,k1,c1, 'vvcc'],
              [a2,p1,b2,i2,  j2,d2,q1,c2, 'vvca'],
              [p2,i3,a3,j3,  l2,b3,k2,q2, 'ccav'],
              [a4,p3,b4,q3,  s1,d3,r1,c3, 'vvaa'],
              [p4,i4,q4,j4,  l3,s2,k3,r2, 'ccaa'],
              [a5,i5,q5,p5,  r3,s3,j5,b5, 'vaca'],
              [q6,i6,a6,p6,  r4,b6,j6,s4, 'avca'],
              [r5,p7,a7,q7,  u1,b7,s5,v1, 'vaaa'],
              [q8,i7,r6,p8,  s6,v2,j7,u2, 'caaa']]
# List of indexes for the tensors:
#              d_mu          d_nu     (name)
indTens_Psi1=[[a1,b1,i1,j1,  c1,d1,k1,l1, 'vvcc'],
              [a2,b2,i2,p1,  c2,d2,j2,q1, 'vvca'],
              [i3,j3,p2,a3,  k2,l2,q2,b3, 'ccav'],
              [a4,b4,p3,q3,  c3,d3,r1,s1, 'vvaa'],
              [i4,j4,p4,q4,  k3,l3,r2,s2, 'ccaa'],
              [a5,p5,i5,q5,  b5,r3,j5,s3, 'vaca'],
              [p6,a6,i6,q6,  r4,b6,j6,s4, 'avca'],
              [a7,p7,q7,r5,  b7,s5,u1,v1, 'vaaa'],
              [i7,p8,q8,r6,  j7,s6,u2,v2, 'caaa']]


# H -----------------------------------------------------------------------------------------------
#   H = t E2 + w E4
#   where A\ for "E4":
#    - the indexes of "E4" run through all possible unique 4-tuples
#        (this is done by sorted the first two indexes)
#      UPDATE: it now runs through all possible 4-tuples
#    - some of these "E4" operators belong to particular classes
#        (this is associated via the last elt of "indExOp_H4" using the "indExOpClass" dictionary)
#   and where B\ for "w"
#    - the indexes of "w" are permutated to refer to unique tensors
#        (this is done by using the "symmTens" list)

# A\ E4 -------------------------------------------------------------------------------------------
# Links an ExOp of the Hamiltonian to a Class
indExOpClass={}
indExOpClass['vvcc'] =['vvcc']
indExOpClass['vvca'] =['vvac','vvca']
indExOpClass['ccav'] =['avcc','vacc']
indExOpClass['vvaa'] =['vvaa']
indExOpClass['ccaa'] =['aacc']
indExOpClass['vaca'] =['avac','vaca']
indExOpClass['avca'] =['avca','vaac']
indExOpClass['vaaa'] =['avaa','vaaa']
indExOpClass['caaa'] =['aaac','aaca']
indExOpClass['h0']   =['cc','aa','vv',\
                       'cccc','aaaa','vvvv',\
                       'acac','acca','caca','caac',\
                       'cvcv','cvvc','vcvc','vccv',\
                       'avav','avva','vava','vaav']
indExOpClass['heff2']=[]
indExOpClass['heff4']=[]
indExOpClass['heff2']=indExOpClass['heff2']+\
                      ['vc',\
                       'va',\
                       'ac']
indExOpClass['heff4']=indExOpClass['heff4']+\
                      ['cvcc','vccc',\
                       'cvca','cvac','vcac','vcca',\
                       'accc','cacc']
indExOpClass['heff4']=indExOpClass['heff4']+\
                      ['vvcv','vvvc',\
                       'vvav','vvva',\
                       'avcv','avvc','vavc','vacv']

# Construct the full Hamiltonian ExOp and assign classes.
# (The indexes run through ABCD.)
indlist=[[iX,pX,aX],[jX,qX,bX],[kX,rX,cX],[lX,sX,dX]]
factor={}
for ind0 in range(3):
  for ind1 in range(3):
    for ind2 in range(3):
      for ind3 in range(3):
        factor[code([indlist[0][ind0],indlist[1][ind1],indlist[2][ind2],indlist[3][ind3]])]=0

print '// To make up E4(AB<-CD), there is 3*3*3*3=81 possible 4-tuples'
print '// some of them are redundant are skipped.'
indExOp_H4=[]
iter=0
for ind0 in range(3):
  for ind1 in range(3):
    for ind2 in range(3):
      for ind3 in range(3):
        list=[indlist[0][ind0],indlist[1][ind1],indlist[2][ind2],indlist[3][ind3]]
        name=code(list)

        iter=iter+1
        skip=False
        if ((name[0]==name[1] and name[-2:]!=''.join(sorted(name[-2:])))
         or (''.join(sorted(name[:2]))!=name[:2])):
            skip=True
        if not skip:
          factor[name]=factor[name]+1
          line='// {:2} "{:4}" {:} {:4}'.format(iter,code(list),'included as ',name)
        else:
          factor[name[1]+name[0]+name[3]+name[2]]=factor[name[1]+name[0]+name[3]+name[2]]+1
          line='// {:2} "{:4}" {:} {:4}'.format(iter,code(list),'skipped (see',name[1]+name[0]+name[3]+name[2]+')')
        print line
        if skip:
          continue

        newname='other'
        for cl in ClassNames+['h0','heff2','heff4']:
          if name in indExOpClass[cl]:
            newname=cl
        #for Class,Pattern in occupations.items():
        #  if Pattern == pattern(code_rearrange(list)):
        #    newname=Class
        indExOp_H4.append(list+[newname])
print '// Sum of factors:',sum(factor.values())


# B\ w --------------------------------------------------------------------------------------------
# Uses symmetry of two-el integrals
# to use as few unique tensors as possible
symmTens=[
          ['vvcc','ccvv','vccv','cvvc'],
          ['vvca','acvv','avvc','vvac','vcav','cvva','vacv','cavv'],
          ['ccav','accv','ccva','cvac','avcc','vcca','cavc','vacc'],
          ['vvaa','aavv','vaav','avva'],
          ['ccaa','aacc','acca','caac'],
          ['vaca','cava','acav','avac','cava'],
          ['avca','aacv','aavc','cvaa','vaac','acva','vcaa','caav'],
          ['vaaa','aaav','avaa','aava'],
          ['caaa','aaac','acaa','aaca'],
          #
          ['ccca','accc','cacc','ccac'],
          ['cccv','vccc','cvcc','ccvc'],
          ['vvvc','cvvv','vcvv','vvcv'],
          ['vvva','avvv','vavv','vvav'],
          ['caca','acac'],
          ['cvcv','vcvc'],
          ['avav','vava'],
          ['cacv','cvca','vcac','acvc'],
          ['avcv','vavc','vcva','cvav'],
         ]
# DOUBLE CHECK FOR ERRORS
# check that all lists indeed give the same integral
for elt in symmTens:
  comp=elt[0]
  model1=comp[0]+comp[2]
  model2=comp[1]+comp[3]
  for iteri in range(1,len(elt)):
    comp=elt[iteri]
    comp1=comp[0]+comp[2]
    comp2=comp[1]+comp[3]
    comp3=comp[2]+comp[0]
    comp4=comp[3]+comp[1]
    if((comp1+comp2!=model1+model2)and
       (comp1+comp4!=model1+model2)and
       (comp3+comp2!=model1+model2)and
       (comp3+comp4!=model1+model2)and
       (comp2+comp1!=model1+model2)and
       (comp4+comp1!=model1+model2)and
       (comp2+comp3!=model1+model2)and
       (comp4+comp3!=model1+model2)):
      print 'ERROR symmTens',elt[0], comp, comp1, comp2, comp3, comp4
      exit()
# Construct the tensors w
indTens_H4=[]
for iteri in range(len(indExOp_H4)):
  tensor=[indExOp_H4[iteri][i] for i in [0,1,3,2]]
  tensor=[indExOp_H4[iteri][i] for i in [0,1,2,3]]
  name  =code(tensor)

  for iterj in range(len(symmTens)):
    if name in symmTens[iterj]:
      trans=[]
      for k2 in range(4):
        for k1 in range(4):
          if name[k1]==symmTens[iterj][0][k2] and k1 not in trans:
            trans.append(k1)
            break
      tensor=[tensor[iterk] for iterk in trans]
      name=''.join([name[iterk] for iterk in trans])

  indTens_H4.append(tensor+[name])

# C\ E2 -------------------------------------------------------------------------------------------
# Construct the full Hamiltonian ExOp
# (The indexes run through AB)
indlist=[[iX,pX,aX],[jX,qX,bX]]
indExOp_H2=[]
for ind0 in range(len(indlist[0])):
  for ind1 in range(len(indlist[1])):
    list=[indlist[0][ind0],indlist[1][ind1]]
    name=code(list)

    newname='other'
    for cl in ClassNames+['h0','heff2','heff4']:
      if name in indExOpClass[cl]:
        newname=cl
    #for Class,Pattern in occupations.items():
    #  if Pattern == pattern(code_rearrange(list)):
    #    newname=Class
    indExOp_H2.append(list+[newname])

# D\ t --------------------------------------------------------------------------------------------
# Construct the tensors t
# (again we use the symmetries of the one-el integral
#  to minimize the number of different tensors needed.)
indTens_H2=[]
for iteri in range(len(indExOp_H2)):
  tensor=indExOp_H2[iteri][:2]
  name  =code(tensor)
  if name=='ac' or name=='av' or name=='cv':
    tensor=[tensor[1],tensor[0]]
    name=name[1]+name[0]
  indTens_H2.append(tensor+[name])


# Print out stuff ---------------------------------------------------------------------------------
print ''
print '// With the unique tensors found, |Psi1> is:'
for cl in ClassNames+['h0','heff2','heff4']:
  for iteri in range(len(indExOp_Psi1)):
    if indExOp_Psi1[iteri][-1]==cl:
      print '// d_{:5} E_{:2} E_{:2}        Class:{:6} OccPattern:{:9}'.format(\
                            code(indTens_Psi1[iteri][:4]),\
                            code(indExOp_Psi1[iteri][:2]),\
                            code(indExOp_Psi1[iteri][2:4]),\
                            cl,\
                            output_pattern(code(indExOp_Psi1[iteri][:4])))
print ''
print '// With the unique tensors found, <Psi1| is:'
for cl in ClassNames+['h0','heff2','heff4']:
  for iteri in range(len(indExOp_Psi1)):
    if indExOp_Psi1[iteri][-1]==cl:
      print '// d_{:5} E_{:2} E_{:2}        Class:{:6} OccPattern:{:9}'.format(\
                            code(indTens_Psi1[iteri][4:8]),\
                            code(indExOp_Psi1[iteri][4:6]),\
                            code(indExOp_Psi1[iteri][6:8]),\
                            cl,\
                            output_pattern(code(indExOp_Psi1[iteri][4:8])))
print ''
print '// With the unique tensors found, the Hamiltonian is:'
for cl in ClassNames+['h0','heff2','heff4']:
  for iteri in range(len(indExOp_H4)):
    if indExOp_H4[iteri][-1]==cl:
      print '// w_{:5} E_{:7} ({:1})    Class:{:6} OccPattern:{:9}'.format(\
                            code(indTens_H4[iteri][:4]),\
                            code(indExOp_H4[iteri][:4]),\
                            factor[code(indExOp_H4[iteri][:4])],\
                            cl,\
                            output_pattern(code_rearrange(indExOp_H4[iteri][:4])))
  for iteri in range(len(indExOp_H2)):
    if indExOp_H2[iteri][-1]==cl:
      print '// t_{:5} E_{:7} ({:1})    Class:{:6} OccPattern:{:9}'.format(\
                            code(indTens_H2[iteri][:2]),\
                            code(indExOp_H2[iteri][:2]),\
                            1,\
                            cl,
                            output_pattern(code_rearrange(indExOp_H2[iteri][:2])))
for iteri in range(len(indExOp_H4)):
  if indExOp_H4[iteri][-1]=='other':
      print '// w_{:5} E_{:7} ({:1})    Class:{:6} OccPattern:{:9}'.format(\
                            code(indTens_H4[iteri][:4]),\
                            code(indExOp_H4[iteri][:4]),\
                            factor[code(indExOp_H4[iteri][:4])],\
                            'other',\
                            output_pattern(code_rearrange(indExOp_H4[iteri][:4])))
for iteri in range(len(indExOp_H2)):
  if indExOp_H2[iteri][-1]=='other':
      print '// t_{:5} E_{:7} ({:1})    Class:{:6} OccPattern:{:9}'.format(\
                            code(indTens_H2[iteri][:2]),\
                            code(indExOp_H2[iteri][:2]),\
                            1,\
                            'other',
                            output_pattern(code_rearrange(indExOp_H2[iteri][:2])))


# Loop over mu,nu,tau of 'd_mu d_nu w_tau <O^T_nu V_tau O_mu>'
print ''
print '// The actual calculation yields:'
global_result=[]
log_H4={}
log_H2={}
for this_class in ClassNames+['other']:
  if this_class=='avca':
    continue
  print '// for V of class '+this_class
  result=[]

  for tau in range(len(indExOp_H4)):
    listtau=indExOp_H4[tau][:4]
    if this_class!='other':
      if not (pattern(code_rearrange(listtau))==occupations[this_class]):
        continue
    elif indExOp_H4[tau][-1]!='other':
      continue
    log_H4[tau]='evaluated'
    for nu in range(len(indExOp_Psi1)):

        listnu=indExOp_Psi1[nu][4:8]

        if is_non_zero(code(listnu)+code_rearrange(listtau)):

          # H
          if indExOp_H4[tau][-1]=='other' or indExOp_H4[tau][-1]=='h0':
            name='WO'+indTens_H4[tau][-1]
          elif indExOp_H4[tau][-1]=='heff4':
            name='WE'+indTens_H4[tau][-1]
          else:
            name='WC'+indTens_H4[tau][-1]
          Wtau = sqa.tensor(name, indTens_H4[tau][:4], symm(indTens_H4[tau][:4]))
          Vtau   = sqa.term( factor[code(listtau)]*0.5, [''],  [Wtau, sqa.sfExOp(listtau)])

          # <Psi1|
          bnu    = sqa.tensor('b'+indTens_Psi1[nu][-1], indTens_Psi1[nu][4:8], symm(indTens_Psi1[nu][4:8]))
          Onu    = sqa.term( 1.0, [''],  [bnu, sqa.sfExOp(listnu[:2]), sqa.sfExOp(listnu[2:4])])
         #Onu    = sqa.term( 1.0, [''],  [bnu, sqa.sfExOp([listnu[i] for i in [0,2,3,1]])])

          # Define the normal-ordered:   W_nu = <O^T_nu V_tau> W_tau
          term=sqa.multiplyTerms(Onu, Vtau)
          #print term
          result=sqa.normalOrder(term)
          result=mussardCode.simplify_all(result,[deltaC, deltaA, deltaV],cumulantE4=cumulantE4)

          # Write out a message about this contribution
          if (len(result)!=0):
            global_result+=result
            print '// <Psi1_{:5} | V_{:5} > ={:5}    Class:{:6}'.format(\
                        indExOp_Psi1[nu][-1],\
                        code(listtau),\
                        len(result),\
                        indExOp_H4[tau][-1])
            #print '( W'+indTens_Psi1[nu][-1],code(indTens_Psi1[nu][4:8]),code(listnu),')',\
            #      '('  ,name                ,code(indTens_H4[tau][:4])  ,code(listtau),')'
            #print '( W'+indTens_Psi1[nu][-1],code(indTens_Psi1[nu][4:8]),code([listnu[i] for i in [0,2,3,1]]),')',\
            #      '('  ,name                ,code(indTens_H4[tau][:4])  ,code(listtau),')'


  for tau in range(len(indExOp_H2)):
    listtau=indExOp_H2[tau][:2]
    if this_class!='other':
      if not (pattern(code_rearrange(listtau))==occupations[this_class]):
        continue
    elif indExOp_H2[tau][-1]!='other':
      continue
    log_H2[tau]='evaluated'
    for nu in range(len(indExOp_Psi1)):

        listnu=indExOp_Psi1[nu][4:8]

        if is_non_zero(code(listnu)+code_rearrange(listtau)):

          # H
          if indExOp_H2[tau][-1]=='other' or indExOp_H2[tau][-1]=='h0':
            name='WO'+indTens_H2[tau][-1]
          elif indExOp_H2[tau][-1]=='heff2':
            name='WE'+indTens_H2[tau][-1]
          else:
            name='WC'+indTens_H2[tau][-1]
          Wtau = sqa.tensor(name, indTens_H2[tau][:2], symm(indTens_H2[tau][:2]))
          Ttau   = sqa.term( 1.0, [''],  [Wtau, sqa.sfExOp(listtau)])

          # <Psi1|
          bnu    = sqa.tensor('b'+indTens_Psi1[nu][-1], indTens_Psi1[nu][4:8], symm(indTens_Psi1[nu][4:8]))
          Onu    = sqa.term( 1.0, [''],  [bnu, sqa.sfExOp(listnu[:2]), sqa.sfExOp(listnu[-2:])])
         #Onu    = sqa.term( 1.0, [''],  [bnu, sqa.sfExOp([listnu[i] for i in [0,2,3,1]])])

          # Define the normal-ordered:   W_nu = <O^T_nu T_tau> T_tau
          term=sqa.multiplyTerms(Onu, Ttau)
          #print term
          result=sqa.normalOrder(term)
          result=mussardCode.simplify_all(result,[deltaC, deltaA, deltaV],cumulantE4=cumulantE4)

          # Write out a message about this contribution
          if (len(result)!=0):
            global_result+=result
            print '// <Psi1_{:5} | T_{:5} > ={:5}    Class:{:6}'.format(\
                        indExOp_Psi1[nu][-1],\
                        code(listtau),\
                        len(result),\
                        indExOp_H2[tau][-1])
            #print '( W'+indTens_Psi1[nu][-1],code(indTens_Psi1[nu][4:8]),code(listnu),')',\
            #      '('  ,name                ,code(indTens_H2[tau][:2])  ,code(listtau),')'
            #print '( W'+indTens_Psi1[nu][-1],code(indTens_Psi1[nu][4:8]),code([listnu[i] for i in [0,2,3,1]]),')',\
            #      '('  ,name                ,code(indTens_H2[tau][:2])  ,code(listtau),')'

# Write out the tensors and the equations
#global_result=mussardCode.simplify_all(result,[deltaC, deltaA, deltaV],cumulantE4=cumulantE4)
if len(global_result)!=0:
  AllTensors,nbrTensors,nbrEqs = mussardCode.write_tensors_and_equations('MRLCC3',global_result,tensors,commentE3=commentE3)

  # Write out GetMethodInfo
  print '  static void GetMethodInfo(FMethodInfo &Out) {'
  print '    Out = FMethodInfo();'
  print '    Out.pName = "MRLCC3";'
  print '    Out.pSpinClass = "restricted";'
  print '    Out.pTensorDecls = &TensorDecls[0];'
  print '    Out.nTensorDecls = %i;'%(nbrTensors)
  print '    Out.EqsRes = FEqSet(&EqsRes[0], %i, "MRLCC3/Res");'%(len(global_result))
  print '  };'
  print '};'
#  print '\n\n\n\n\n\n\n\n'

print ''
print '// Log:'
for tau in range(len(indExOp_H4)):
  if tau in log_H4.keys():
    print '// {:4} Class:{:5}    {:}'.format(code(indExOp_H4[tau][:4]),indExOp_H4[tau][-1],log_H4[tau])
  else:
    print '// {:4} Class:{:5}    {:}'.format(code(indExOp_H4[tau][:4]),indExOp_H4[tau][-1],'passed')
for tau in range(len(indExOp_H2)):
  if tau in log_H2.keys():
    print '// {:4} Class:{:5}    {:}'.format(code(indExOp_H2[tau][:2]),indExOp_H2[tau][-1],log_H2[tau])
  else:
    print '// {:4} Class:{:5}    {:}'.format(code(indExOp_H2[tau][:2]),indExOp_H2[tau][-1],'passed')
