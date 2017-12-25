# C++ Caesar Cipher

An Old Caesar cipher project I had.

Below is the Readme of the project that was submitted along side the code.

# Readme

How to use:

Disclaimer: 

    The other methods other than the recommended one are not guaranteed to work.
    I also do not use Cygwin nor can I vouch for the safety of Cygwin. 
    The method is provided there as an option.

    I do not own a Dedicated Linux system and the Linux method should be able to work on Xubuntu.

    I do not own a mac and anything related to a mac in this readme has no guarantee of working.
    All information about Macs that is present is based on research and has not been tested personally.
    Information provided by a Mac is there for an option but may not work.

Windows--
------------------------------------------------
Run the program and type the number or category you wish to do.

If you do not wish to run the exe, ensure that you have a compiler installed so you may compile it before running.

+++Visual Studio- (Recommended)

    If you have Visual studio for Windows, create an empty project and add the included source file into the project.
    Compile and Run.

    Creating a new project involves File>New>Project
    Select Empty project in the Visual C++ category.

    Adding the source file will include right clicking the "Source" files folder (Usually in the sidebar) and clicking add existing item.
    Find source.cpp and add it to the program.

    Ctrl + F5 or F5 should allow you to debug and run the program.

++Without Visual Studio- (Not Recommended)
    Windows does not come with a compiler implemented into its terminal or cmd.
    You would have to manually install the GNU C++ complier before you are able to use the g++ or gcc commands.

    See https://www.cygwin.com/ for more information.
    See http://cygwin.wikia.com/wiki/How_to_install_a_newer_version_of_GCC on how to install gcc and g++

    After installing the compiler, you would need to run the "g++ source.cpp" command in the proper directory.


Linux
------------------------------------------------
    Linux should already have the g++ commands installed into their terminal.
    If you do not have the g++ commands installed, you will need to use the "sudo apt-get install g++" command within the terminal.

    You can simply use the "g++ source.cpp" command when you're in the proper directory.
    A file, usually named a.out should have been produced.

    When a.out is made, you should be able to run it using the "./a.out" command.
    Note: This command may vary among Linux systems. Please check with your system if it may require a different command.

Mac
------------------------------------------------

You may need to install clang.

++Mac XCode-

    Have XCode installed. 
    If you do not have XCode,
    Try visiting https://developer.apple.com/xcode/

    You would need to create a C++ project within XCode and you should be able to load in the CPP file.
    You should be able to use the run button or option.

++Mac Terminal

    The mac terminal should function similarly to the Linux terminal.
    use the "g++ source.cpp" when you're in the proper directory.
    if that doesn't work, try "g++" along with a more explicit directory.
    such as "~/directory/source.cpp"


Program output/Answers:

Encryption
------------------------------------------------
    Enter the Number for rotation: 5
    Enter the string: This is a great program
    Rotated: 5
    Rotated String: Ymnx nx f lwjfy uwtlwfr
    Enter the Number for rotation: 22
    Enter the string: Whoah that was fast
    Rotated: 22
    Rotated String: Sdkwd pdwp swo bwop
    Enter the Number for rotation: 14
    Enter the string: I love security
    Rotated: 14
    Rotated String: W zcjs gsqifwhm

Decryption
------------------------------------------------
Enter the String to brute force: nyjnlf erzrzore gb rng na nccyr n qnl

    ozkomg fsasapsf hc soh ob oddzs o rom
    palpnh gtbtbqtg id tpi pc peeat p spn
    qbmqoi hucucruh je uqj qd qffbu q tqo
    rcnrpj ivdvdsvi kf vrk re rggcv r urp
    sdosqk jwewetwj lg wsl sf shhdw s vsq
    teptrl kxfxfuxk mh xtm tg tiiex t wtr
    ufqusm lygygvyl ni yun uh ujjfy u xus
    vgrvtn mzhzhwzm oj zvo vi vkkgz v yvt
    whswuo naiaixan pk awp wj wllha w zwu
    xitxvp objbjybo ql bxq xk xmmib x axv
    yjuywq pckckzcp rm cyr yl ynnjc y byw
    zkvzxr qdldladq sn dzs zm zookd z czx
    always remember to eat an apple a day
    bmxbzt sfnfncfs up fbu bo bqqmf b ebz
    cnycau tgogodgt vq gcv cp crrng c fca
    dozdbv uhphpehu wr hdw dq dssoh d gdb
    epaecw viqiqfiv xs iex er ettpi e hec
    fqbfdx wjrjrgjw yt jfy fs fuuqj f ifd
    grcgey xkskshkx zu kgz gt gvvrk g jge
    hsdhfz yltltily av lha hu hwwsl h khf
    iteiga zmumujmz bw mib iv ixxtm i lig
    jufjhb anvnvkna cx njc jw jyyun j mjh
    kvgkic bowowlob dy okd kx kzzvo k nki
    lwhljd cpxpxmpc ez ple ly laawp l olj
    mximke dqyqynqd fa qmf mz mbbxq m pmk
    nyjnlf erzrzore gb rng na nccyr n qnl
    End of Brute Force.

Enter the String to brute force: f xj buzfqba ql pqrav zljmrqbo pbzrofqv

    g yk cvagrcb rm qrsbw amknsrcp qcaspgrw
    h zl dwbhsdc sn rstcx bnlotsdq rdbtqhsx
    i am excited to study computer security
    j bn fydjufe up tuvez dpnqvufs tfdvsjuz
    k co gzekvgf vq uvwfa eqorwvgt ugewtkva
    l dp haflwhg wr vwxgb frpsxwhu vhfxulwb
    m eq ibgmxih xs wxyhc gsqtyxiv wigyvmxc
    n fr jchnyji yt xyzid htruzyjw xjhzwnyd
    o gs kdiozkj zu yzaje iusvazkx ykiaxoze
    p ht lejpalk av zabkf jvtwbaly zljbypaf
    q iu mfkqbml bw abclg kwuxcbmz amkczqbg
    r jv nglrcnm cx bcdmh lxvydcna bnldarch
    s kw ohmsdon dy cdeni mywzedob comebsdi
    t lx pintepo ez defoj nzxafepc dpnfctej
    u my qjoufqp fa efgpk oaybgfqd eqogdufk
    v nz rkpvgrq gb fghql pbzchgre frphevgl
    w oa slqwhsr hc ghirm qcadihsf gsqifwhm
    x pb tmrxits id hijsn rdbejitg htrjgxin
    y qc unsyjut je ijkto secfkjuh iuskhyjo
    z rd votzkvu kf jklup tfdglkvi jvtlizkp
    a se wpualwv lg klmvq ugehmlwj kwumjalq
    b tf xqvbmxw mh lmnwr vhfinmxk lxvnkbmr
    c ug yrwcnyx ni mnoxs wigjonyl mywolcns
    d vh zsxdozy oj nopyt xjhkpozm nzxpmdot
    e wi atyepaz pk opqzu ykilqpan oayqnepu
    f xj buzfqba ql pqrav zljmrqbo pbzrofqv
    End of Brute Force.

Letter Frequency
------------------------------------------------
Enter the String for letter frequency analysis: nud nubf nuej nuehe nua bjm udn

    A : 1
    B : 2
    D : 2
    E : 3
    F : 1
    H : 1
    J : 2
    M : 1
    N : 6
    U : 6

Enter the String for letter frequency analysis: inixepfcr ipc xipfvcr cepc pki ginaqadvr

    A : 2
    C : 5
    D : 1
    E : 2
    F : 2
    G : 1
    I : 6
    K : 1
    N : 2
    P : 5
    Q : 1
    R : 3
    V : 2
    X : 2

Cipher Text
------------------------------------------------
inixepfcr ipc xipfvcr cepc pki ginaqadvr

elephants eat peanuts that are delicious

    I=E
    N=L
    X=P
    E=H
    P=A
    F=N
    C=T
    R=S
    V=U
    K=R
    G=D
    A=I
    Q=C
    D=O
