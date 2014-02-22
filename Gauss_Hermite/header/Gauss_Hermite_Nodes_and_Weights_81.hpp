//
//        Gauss_Hermite_Nodes_and_Weights_81.hpp
//
//
//        Created by Sivaram Ambikasaran on 2014-02-22.09:42:47.
//
//
//        Array of nodes and weights for Gauss Hermite quadrature of order 81.
//
//

#ifndef __Gauss_Hermite_Nodes_and_Weights_81_hpp__
#define __Gauss_Hermite_Nodes_and_Weights_81_hpp__

void Gauss_Hermite_Nodes_and_Weights_81(long double*& nodes, long double*& weights) {
	nodes	= new long double[81];
	weights	= new long double[81];

	nodes[0] 	= 0;
	weights[0] 	= 0.24606621240915123282811558961952874855619631336438074364840050170604173048132374962157084373597899134567219937159962207575995311;

	nodes[1] 	= -0.24608144890838047545503490533788546665501692678071121627929303410153999085742610666043314292733196496033014969072384411894511324;
	weights[1] 	= 0.231650634284238150497463512729666688796016792024285771995452106403638369275825266681097542106009999566680417751149731786930537;

	nodes[2] 	= 0.24608144890838047545503490533788546665501692678071121627929303410153999085742610666043314292733196496033014969072384411894511324;
	weights[2] 	= 0.231650634284238150497463512729666688796016792024285771995452106403638369275825266681097542106009999566680417751149731786930537;

	nodes[3] 	= -0.49225440521533764562132363251996130475299219666960845580972996212621958651509681732829263836274571772144007539141466509329090106;
	weights[3] 	= 0.19325876496080130378207151149978535009919209280760033981928748335846227293401262962818940796919217893224392455665336654729772;

	nodes[4] 	= 0.49225440521533764562132363251996130475299219666960845580972996212621958651509681732829263836274571772144007539141466509329090106;
	weights[4] 	= 0.19325876496080130378207151149978535009919209280760033981928748335846227293401262962818940796919217893224392455665336654729772;

	nodes[5] 	= -0.73861081967444193024249154860011747251384597400015256523987827387079435947482123015352016776997364331880285995491142226894839984;
	weights[5] 	= 0.1428408153223776909402508744823448737910794892567318931945362007612782841551838034735374816552229695731598217425523537410322;

	nodes[6] 	= 0.73861081967444193024249154860011747251384597400015256523987827387079435947482123015352016776997364331880285995491142226894839984;
	weights[6] 	= 0.1428408153223776909402508744823448737910794892567318931945362007612782841551838034735374816552229695731598217425523537410322;

	nodes[7] 	= -0.98524353603723147165911523892867890941482062036913161300931540172401580574656603368169369486460568694543331096295959063093088397;
	weights[7] 	= 0.09349258222769533985760406898392827837624204484225977178192489293377608952131278830547290352753587271384242241827943822616;

	nodes[8] 	= 0.98524353603723147165911523892867890941482062036913161300931540172401580574656603368169369486460568694543331096295959063093088397;
	weights[8] 	= 0.09349258222769533985760406898392827837624204484225977178192489293377608952131278830547290352753587271384242241827943822616;

	nodes[9] 	= -1.2322467534512361937823903747624992511570759849555376701588821272934762256190178111945325561163974393411191921690128999964602516;
	weights[9] 	= 0.0541548637285855869420452161225746809223700468181480203327204906692113106204767873866786539309158689868907032476238550715;

	nodes[10] 	= 1.2322467534512361937823903747624992511570759849555376701588821272934762256190178111945325561163974393411191921690128999964602516;
	weights[10] 	= 0.0541548637285855869420452161225746809223700468181480203327204906692113106204767873866786539309158689868907032476238550715;

	nodes[11] 	= -1.4797165084468731199325886434090082636025774941182446038002852395793394037874225270709780159174563842348721196062414963904513029;
	weights[11] 	= 0.027737938219946446194473857636702326931353918741879589787945465438744157056620513118757973543437668638348310864089475441;

	nodes[12] 	= 1.4797165084468731199325886434090082636025774941182446038002852395793394037874225270709780159174563842348721196062414963904513029;
	weights[12] 	= 0.027737938219946446194473857636702326931353918741879589787945465438744157056620513118757973543437668638348310864089475441;

	nodes[13] 	= -1.7277511839192137219143126082348151881866730005859144807313008024593190342710438602396637782735472494851933306793226033683713528;
	weights[13] 	= 0.012549959027149006335135978264923624323531202022440753442815082188169090843075692356039468016822432287502134717133673937;

	nodes[14] 	= 1.7277511839192137219143126082348151881866730005859144807313008024593190342710438602396637782735472494851933306793226033683713528;
	weights[14] 	= 0.012549959027149006335135978264923624323531202022440753442815082188169090843075692356039468016822432287502134717133673937;

	nodes[15] 	= -1.976452053316498798185710741863613599872270573581173768646379428431900645180183606998880110358390398602072478023266785031390622;
	weights[15] 	= 0.00500964719374785632218716468981470088932692938867304524417572578179361855016583136192178763349610186050689200413162228;

	nodes[16] 	= 1.976452053316498798185710741863613599872270573581173768646379428431900645180183606998880110358390398602072478023266785031390622;
	weights[16] 	= 0.00500964719374785632218716468981470088932692938867304524417572578179361855016583136192178763349610186050689200413162228;

	nodes[17] 	= -2.2259238693277424113672774266046497173896185844662236123024537502666344289054291671241531821004987571805992416011949893712309083;
	weights[17] 	= 0.00176173050581566539634282878955640610933751703346904255136124530049373814853674682400478988839535842236748881444578891;

	nodes[18] 	= 2.2259238693277424113672774266046497173896185844662236123024537502666344289054291671241531821004987571805992416011949893712309083;
	weights[18] 	= 0.00176173050581566539634282878955640610933751703346904255136124530049373814853674682400478988839535842236748881444578891;

	nodes[19] 	= -2.476275507773527391463068791651371619086289897550825126630843247030854973376276775831085298928651540385890127718532566196799797;
	weights[19] 	= 0.0005448913238176687793378706067614452638639799130120860403673887501306610366076623138212080259583991802140365180095432;

	nodes[20] 	= 2.476275507773527391463068791651371619086289897550825126630843247030854973376276775831085298928651540385890127718532566196799797;
	weights[20] 	= 0.0005448913238176687793378706067614452638639799130120860403673887501306610366076623138212080259583991802140365180095432;

	nodes[21] 	= -2.7276206792242433399264325133526320279179859565454735986320887496515274851779747845641967444243791657816795334149647494073650576;
	weights[21] 	= 0.000147938741641005296610186538564273276304377089646173817211983357284069008771526340183840394261449786080627310857168;

	nodes[22] 	= 2.7276206792242433399264325133526320279179859565454735986320887496515274851779747845641967444243791657816795334149647494073650576;
	weights[22] 	= 0.000147938741641005296610186538564273276304377089646173817211983357284069008771526340183840394261449786080627310857168;

	nodes[23] 	= -2.9800787232025515793941288157072271265289730385597201379412752588141895442438988724557967369887720497147153842381664603856440843;
	weights[23] 	= 0.0000351806518403875539558978100901187048249492534462906925083479550672053364724486633026305069583475309306181694866206;

	nodes[24] 	= 2.9800787232025515793941288157072271265289730385597201379412752588141895442438988724557967369887720497147153842381664603856440843;
	weights[24] 	= 0.0000351806518403875539558978100901187048249492534462906925083479550672053364724486633026305069583475309306181694866206;

	nodes[25] 	= -3.2337755028119286820627260010824361935973290177653026155061675550954009218837982549327696206633376071612848508388838859523540149;
	weights[25] 	= 7.3096953196703322681169921135379076001119182332619201276077256772212520886283621801327115902269176125246986760463e-6;

	nodes[26] 	= 3.2337755028119286820627260010824361935973290177653026155061675550954009218837982549327696206633376071612848508388838859523540149;
	weights[26] 	= 7.3096953196703322681169921135379076001119182332619201276077256772212520886283621801327115902269176125246986760463e-6;

	nodes[27] 	= -3.4888444214602068836768237335497034553082072308058920613354849721171230567264717090672637323171295264583585726222837770440615145;
	weights[27] 	= 1.3232911149144286012146807061735609648684944960540918955171992995910800750073950421527166417763006145484088787501e-6;

	nodes[28] 	= 3.4888444214602068836768237335497034553082072308058920613354849721171230567264717090672637323171295264583585726222837770440615145;
	weights[28] 	= 1.3232911149144286012146807061735609648684944960540918955171992995910800750073950421527166417763006145484088787501e-6;

	nodes[29] 	= -3.7454275882737635006135866820825797342713957292803121695324083485543339386237011341842474630476028308442583373110556835368289924;
	weights[29] 	= 2.080702097853289958833255567669907037868523379772948349395817202217169829420123297899645708902737582958698907601e-7;

	nodes[30] 	= 3.7454275882737635006135866820825797342713957292803121695324083485543339386237011341842474630476028308442583373110556835368289924;
	weights[30] 	= 2.080702097853289958833255567669907037868523379772948349395817202217169829420123297899645708902737582958698907601e-7;

	nodes[31] 	= -4.0036771651776290846693303927590791198906096102318183964753948897785884394038138498605847995768915519209820269894734477005813513;
	weights[31] 	= 2.83161970518299813809393068609470132067407175096571149749325649018628845746272403744367796246652236888136445631e-8;

	nodes[32] 	= 4.0036771651776290846693303927590791198906096102318183964753948897785884394038138498605847995768915519209820269894734477005813513;
	weights[32] 	= 2.83161970518299813809393068609470132067407175096571149749325649018628845746272403744367796246652236888136445631e-8;

	nodes[33] 	= -4.2637569369381027629792453634582229025102021182926086852701133957155598988150200364994001524319370700726682777260244108679407274;
	weights[33] 	= 3.3221419859886430348831757763066083148275561629793379805771036328283388134748621106438824201537148889306792064e-9;

	nodes[34] 	= 4.2637569369381027629792453634582229025102021182926086852701133957155598988150200364994001524319370700726682777260244108679407274;
	weights[34] 	= 3.3221419859886430348831757763066083148275561629793379805771036328283388134748621106438824201537148889306792064e-9;

	nodes[35] 	= -4.5258441564113083444636707940709930227118763448640994396379794078054352160563455712961777972960650056620378895847304848592694098;
	weights[35] 	= 3.3453423873608683845294647814088497094070075594112366943435798572705974553070490775157269311101102183969179961e-10;

	nodes[36] 	= 4.5258441564113083444636707940709930227118763448640994396379794078054352160563455712961777972960650056620378895847304848592694098;
	weights[36] 	= 3.3453423873608683845294647814088497094070075594112366943435798572705974553070490775157269311101102183969179961e-10;

	nodes[37] 	= -4.7901317317816870506205611263726614855872405309151290706829992338476188409055937613058696132970264288638728810273246022603960981;
	weights[37] 	= 2.87706199258380843744096436940466279108056334900973895038300928189465549125518687388260266773572579274997837e-11;

	nodes[38] 	= 4.7901317317816870506205611263726614855872405309151290706829992338476188409055937613058696132970264288638728810273246022603960981;
	weights[38] 	= 2.87706199258380843744096436940466279108056334900973895038300928189465549125518687388260266773572579274997837e-11;

	nodes[39] 	= -5.0568308420977288833938177195464400726214080834111596915303002944404202275127147754845033344463442136192020533352386532383210538;
	weights[39] 	= 2.101479658611452672181589979631072362190473664139642181792208200008969322065205191417380286061369260163825315e-12;

	nodes[40] 	= 5.0568308420977288833938177195464400726214080834111596915303002944404202275127147754845033344463442136192020533352386532383210538;
	weights[40] 	= 2.101479658611452672181589979631072362190473664139642181792208200008969322065205191417380286061369260163825315e-12;

	nodes[41] 	= -5.326174093940064175282269719447206875099785157385996514341872549657003622412842129237015950374419823191107759681975261371897828;
	weights[41] 	= 1.295520422051043224345511390203669756239533173079196451889911929502650550079775353215691730814485928157242331e-13;

	nodes[42] 	= 5.326174093940064175282269719447206875099785157385996514341872549657003622412842129237015950374419823191107759681975261371897828;
	weights[42] 	= 1.295520422051043224345511390203669756239533173079196451889911929502650550079775353215691730814485928157242331e-13;

	nodes[43] 	= -5.5984193685789060037147873561814853662102659062778449230186455056211735032274571489771049561930747798561341497855406191974271232;
	weights[43] 	= 6.69312693131033034980908956221947995628426428191998344257499874171708265418011623643623617081616631860230385e-15;

	nodes[44] 	= 5.5984193685789060037147873561814853662102659062778449230186455056211735032274571489771049561930747798561341497855406191974271232;
	weights[44] 	= 6.69312693131033034980908956221947995628426428191998344257499874171708265418011623643623617081616631860230385e-15;

	nodes[45] 	= -5.8738545599912281697239280666282917069800406967776958053027076665478020019957599166519432699074775208963270568232825960501027555;
	weights[45] 	= 2.87468375672513614927229578465617959133014859918688986064023091342546733773308232116803438940176361611188953e-16;

	nodes[46] 	= 5.8738545599912281697239280666282917069800406967776958053027076665478020019957599166519432699074775208963270568232825960501027555;
	weights[46] 	= 2.87468375672513614927229578465617959133014859918688986064023091342546733773308232116803438940176361611188953e-16;

	nodes[47] 	= -6.1528034765082227614445576710357583384693074069405117250928580538058821761587779061992059158973152734508012448998304488676301212;
	weights[47] 	= 1.01707335710609257355103587945920553820543558492975344537723749708961860903070652720093027907553939619017994e-17;

	nodes[48] 	= 6.1528034765082227614445576710357583384693074069405117250928580538058821761587779061992059158973152734508012448998304488676301212;
	weights[48] 	= 1.01707335710609257355103587945920553820543558492975344537723749708961860903070652720093027907553939619017994e-17;

	nodes[49] 	= -6.4356332834442266555506714050545857144488890995506391199301049326037768809103014780294848770494678746222862213848052138896791176;
	weights[49] 	= 2.9333425183931753964700475090462633211453145901779035530834564500104305112315146933514358148174439793702197e-19;

	nodes[50] 	= 6.4356332834442266555506714050545857144488890995506391199301049326037768809103014780294848770494678746222862213848052138896791176;
	weights[50] 	= 2.9333425183931753964700475090462633211453145901779035530834564500104305112315146933514358148174439793702197e-19;

	nodes[51] 	= -6.722764018109133582239161942205873399064084209539487301793630356277076051889512103110378159056779634832858568671597975390677368;
	weights[51] 	= 6.813544912204023632907264905935312126890575766887325107407878050893318314687827988566727503960485003698338e-21;

	nodes[52] 	= 6.722764018109133582239161942205873399064084209539487301793630356277076051889512103110378159056779634832858568671597975390677368;
	weights[52] 	= 6.813544912204023632907264905935312126890575766887325107407878050893318314687827988566727503960485003698338e-21;

	nodes[53] 	= -7.014680940539877671868437955556654487520295891596635562142229733697152044376535605038170373436379064377435316163433394485584174;
	weights[53] 	= 1.2568606780858532835012824931707021459975083155660684640851550703535869575239033336063089053800308078309085e-22;

	nodes[54] 	= 7.014680940539877671868437955556654487520295891596635562142229733697152044376535605038170373436379064377435316163433394485584174;
	weights[54] 	= 1.2568606780858532835012824931707021459975083155660684640851550703535869575239033336063089053800308078309085e-22;

	nodes[55] 	= -7.3119508411483106444357641632499074358219481979067324180305089078864311794724676368930696799402150299444384148521949199929139504;
	weights[55] 	= 1.8111771920709538474795454513510360435462852839680588828931982104937247736708472965044964370397450100394941e-24;

	nodes[56] 	= 7.3119508411483106444357641632499074358219481979067324180305089078864311794724676368930696799402150299444384148521949199929139504;
	weights[56] 	= 1.8111771920709538474795454513510360435462852839680588828931982104937247736708472965044964370397450100394941e-24;

	nodes[57] 	= -7.6152439941755771815282824233940642933996590673405101025760921783096500615961861127923814221175344148444676452824748212916688695;
	weights[57] 	= 1.9995631822582091456158385355065642713848656937757737956437878580811297012490384228436621682179502739835263e-26;

	nodes[58] 	= 7.6152439941755771815282824233940642933996590673405101025760921783096500615961861127923814221175344148444676452824748212916688695;
	weights[58] 	= 1.9995631822582091456158385355065642713848656937757737956437878580811297012490384228436621682179502739835263e-26;

	nodes[59] 	= -7.92536437534264196819981773183537519277166062673018931273195864715433516160888727103887346402019237342871868590859753549424013;
	weights[59] 	= 1.6522218331862341224569524272190572703519639788045556849610881672441252801339064585923360091134342484050699e-28;

	nodes[60] 	= 7.92536437534264196819981773183537519277166062673018931273195864715433516160888727103887346402019237342871868590859753549424013;
	weights[60] 	= 1.6522218331862341224569524272190572703519639788045556849610881672441252801339064585923360091134342484050699e-28;

	nodes[61] 	= -8.243292340443745252811676710617243776916242392261225551171949842477210983535186907122059941349611929578075833758987461716158438;
	weights[61] 	= 9.9316879214597883984693227358574782163854331687487693233345822555808321069740215226708387184337877097272373e-31;

	nodes[62] 	= 8.243292340443745252811676710617243776916242392261225551171949842477210983535186907122059941349611929578075833758987461716158438;
	weights[62] 	= 9.9316879214597883984693227358574782163854331687487693233345822555808321069740215226708387184337877097272373e-31;

	nodes[63] 	= -8.5702467579780241841940720574422391204949594084140909521421121416889259917451281264467847464020902591219301228023661708477191417;
	weights[63] 	= 4.1929734266119890302654815398891071799566325989609032453421798091938347611560160772171145989375271611226285e-33;

	nodes[64] 	= 8.5702467579780241841940720574422391204949594084140909521421121416889259917451281264467847464020902591219301228023661708477191417;
	weights[64] 	= 4.1929734266119890302654815398891071799566325989609032453421798091938347611560160772171145989375271611226285e-33;

	nodes[65] 	= -8.9077787978104054327308201919220749504130138004173797238071163924274247311963217381332069773446929225112851596228946312622698651;
	weights[65] 	= 1.18914593596574411256957742420872293127772503399273891227759137752552009569555183555787789502455742934625153e-35;

	nodes[66] 	= 8.9077787978104054327308201919220749504130138004173797238071163924274247311963217381332069773446929225112851596228946312622698651;
	weights[66] 	= 1.18914593596574411256957742420872293127772503399273891227759137752552009569555183555787789502455742934625153e-35;

	nodes[67] 	= -9.2579198828492231721965682905510057244870228607821844419306675018829152008338152694571146963410673003423961642017817399199355152;
	weights[67] 	= 2.13814214022905209042048824724120255231731094957340273900605229330016965020801131518275487935058877235424682e-38;

	nodes[68] 	= 9.2579198828492231721965682905510057244870228607821844419306675018829152008338152694571146963410673003423961642017817399199355152;
	weights[68] 	= 2.13814214022905209042048824724120255231731094957340273900605229330016965020801131518275487935058877235424682e-38;

	nodes[69] 	= -9.6234282602828920716916764016825007936955085817265066448499786393616901735983801266681181602810145423983427233854100218510689908;
	weights[69] 	= 2.254907252618142939090789522524594782229525175264537560567792491832542632826956930984121011099009480228820443e-41;

	nodes[70] 	= 9.6234282602828920716916764016825007936955085817265066448499786393616901735983801266681181602810145423983427233854100218510689908;
	weights[70] 	= 2.254907252618142939090789522524594782229525175264537560567792491832542632826956930984121011099009480228820443e-41;

	nodes[71] 	= -10.008229962827861567283060905473743525589673690870708117739309434249250494506628956729722370209500025732613857236271336086433931;
	weights[71] 	= 1.2501139575481112407078180538133143604226930927321396499673864706975559793921226297566613644997490295431834615e-44;

	nodes[72] 	= 10.008229962827861567283060905473743525589673690870708117739309434249250494506628956729722370209500025732613857236271336086433931;
	weights[72] 	= 1.2501139575481112407078180538133143604226930927321396499673864706975559793921226297566613644997490295431834615e-44;

	nodes[73] 	= -10.418285423785731840905575669910438632340147556425452725722348340333424684790441147845790306653830843959929184898910024250627304;
	weights[73] 	= 3.092306520213555529077738332931581974903668898161691606171710957738659129290690811317702614571374186471040301e-48;

	nodes[74] 	= 10.418285423785731840905575669910438632340147556425452725722348340333424684790441147845790306653830843959929184898910024250627304;
	weights[74] 	= 3.092306520213555529077738332931581974903668898161691606171710957738659129290690811317702614571374186471040301e-48;

	nodes[75] 	= -10.863536193428574509808208874613008302294096453108843146341121809396698898319701806787298902576351214391963370785429318555670187;
	weights[75] 	= 2.60822983772171840163412596963672782247267537207136597619559217162562827785293890032416298888011312366315982982e-52;

	nodes[76] 	= 10.863536193428574509808208874613008302294096453108843146341121809396698898319701806787298902576351214391963370785429318555670187;
	weights[76] 	= 2.60822983772171840163412596963672782247267537207136597619559217162562827785293890032416298888011312366315982982e-52;

	nodes[77] 	= -11.363287494653906866281464715460002249379740279899372472603994597022836812580830118439750605024577306295799318744656198364092888;
	weights[77] 	= 4.50072112824827742774988006183644735102071932649684916914878540279273036326211624306629146595472172967240150297e-57;

	nodes[78] 	= 11.363287494653906866281464715460002249379740279899372472603994597022836812580830118439750605024577306295799318744656198364092888;
	weights[78] 	= 4.50072112824827742774988006183644735102071932649684916914878540279273036326211624306629146595472172967240150297e-57;

	nodes[79] 	= -11.968119444868722242821173987635960575146409867978586017900680024520886235099970922731859495774188725615511640914203391366079987;
	weights[79] 	= 4.3474845786308689190680461497018014870393095801894435531948001178828345204598585491458890580598121638436848260763e-63;

	nodes[80] 	= 11.968119444868722242821173987635960575146409867978586017900680024520886235099970922731859495774188725615511640914203391366079987;
	weights[80] 	= 4.3474845786308689190680461497018014870393095801894435531948001178828345204598585491458890580598121638436848260763e-63;

}
#endif /*(__Gauss_Hermite_Nodes_and_Weights_81_hpp__)*/