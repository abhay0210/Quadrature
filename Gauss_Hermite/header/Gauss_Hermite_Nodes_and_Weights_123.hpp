//
//        Gauss_Hermite_Nodes_and_Weights_123.hpp
//
//
//        Created by Sivaram Ambikasaran on 2014-02-22.09:42:48.
//
//
//        Array of nodes and weights for Gauss Hermite quadrature of order 123.
//
//

#ifndef __Gauss_Hermite_Nodes_and_Weights_123_hpp__
#define __Gauss_Hermite_Nodes_and_Weights_123_hpp__

void Gauss_Hermite_Nodes_and_Weights_123(long double*& nodes, long double*& weights) {
	nodes	= new long double[123];
	weights	= new long double[123];

	nodes[0] 	= 0;
	weights[0] 	= 0.1998939346108817596838686235277004573292104496111751041844198027525159706943748716256210758217369051780011113761989914596861862;

	nodes[1] 	= -0.19989932450580151387116624824152523452471445077445819147898143300824157041016520233250066098914015831145112310871014489652947594;
	weights[1] 	= 0.192079251043185188295118329824842724904311535003905197015092427734545499889549368565654381684595058070224994848932842618042417;

	nodes[2] 	= 0.19989932450580151387116624824152523452471445077445819147898143300824157041016520233250066098914015831145112310871014489652947594;
	weights[2] 	= 0.192079251043185188295118329824842724904311535003905197015092427734545499889549368565654381684595058070224994848932842618042417;

	nodes[3] 	= -0.39983100199064890053246755882247268852446319753981637112525587346271316788826586370416036454061046071987276951123959684550664323;
	weights[3] 	= 0.17041655690534221795429454085990212883137893261590585190051352256771178113332140127971635151511041442722110432239954615054254;

	nodes[4] 	= 0.39983100199064890053246755882247268852446319753981637112525587346271316788826586370416036454061046071987276951123959684550664323;
	weights[4] 	= 0.17041655690534221795429454085990212883137893261590585190051352256771178113332140127971635151511041442722110432239954615054254;

	nodes[5] 	= -0.59982745357081810186485764509311516350213096409587911032781490786887082099493504341554120082706698053796895565774010674595743862;
	weights[5] 	= 0.139591842632523711999102987125517170193874023198521219993599672054973820248441965558796283478191120769998657971487006993394;

	nodes[6] 	= 0.59982745357081810186485764509311516350213096409587911032781490786887082099493504341554120082706698053796895565774010674595743862;
	weights[6] 	= 0.139591842632523711999102987125517170193874023198521219993599672054973820248441965558796283478191120769998657971487006993394;

	nodes[7] 	= -0.79992123705629016828079813530580150807630038141646947203149939674743730246148541458396771606599347770830840164700588394125609883;
	weights[7] 	= 0.10555264545810969387577493500227377285001712814405362855231453955860602964411502374370949423777213584221431900582339069135;

	nodes[8] 	= 0.79992123705629016828079813530580150807630038141646947203149939674743730246148541458396771606599347770830840164700588394125609883;
	weights[8] 	= 0.10555264545810969387577493500227377285001712814405362855231453955860602964411502374370949423777213584221431900582339069135;

	nodes[9] 	= -1.000145116350882723926996148701007214948118847207731006620254795159538031560841951663593085985232879834457382649724185405721017;
	weights[9] 	= 0.0736648358691837713320309028718723732368523072777019973603210020378345438816020578639572137801812525207106502564121767964;

	nodes[10] 	= 1.000145116350882723926996148701007214948118847207731006620254795159538031560841951663593085985232879834457382649724185405721017;
	weights[10] 	= 0.0736648358691837713320309028718723732368523072777019973603210020378345438816020578639572137801812525207106502564121767964;

	nodes[11] 	= -1.2005321321308889252029373493302470169261017666935700685824101910234835521587428051360266271513156071487667638941538685545453934;
	weights[11] 	= 0.047438564768729015507706039952951605103609113631918633764269839720782548263376607060671262101817318816969098040849113823;

	nodes[12] 	= 1.2005321321308889252029373493302470169261017666935700685824101910234835521587428051360266271513156071487667638941538685545453934;
	weights[12] 	= 0.047438564768729015507706039952951605103609113631918633764269839720782548263376607060671262101817318816969098040849113823;

	nodes[13] 	= -1.4011156742530043238858927675177027312376839416911737373685361337868988376090123823656527746794479230160179997229091208414306983;
	weights[13] 	= 0.02818109691094368934181382788842688848449107518697964245712552259635636813304587650832609960791554088911378943407376912;

	nodes[14] 	= 1.4011156742530043238858927675177027312376839416911737373685361337868988376090123823656527746794479230160179997229091208414306983;
	weights[14] 	= 0.02818109691094368934181382788842688848449107518697964245712552259635636813304587650832609960791554088911378943407376912;

	nodes[15] 	= -1.6019295563640744750598866609171308526438224952246788843551494167643153789893465315536645501053460652496366654308828851443226746;
	weights[15] 	= 0.0154379731794939414478606292476160654395133842862059629477368150031272405551671186599565291262531030759084827715520678;

	nodes[16] 	= 1.6019295563640744750598866609171308526438224952246788843551494167643153789893465315536645501053460652496366654308828851443226746;
	weights[16] 	= 0.0154379731794939414478606292476160654395133842862059629477368150031272405551671186599565291262531030759084827715520678;

	nodes[17] 	= -1.8030080932132322991455443933282350213446659317056019612298751539312978440240878486195943625909444277453425380481784503670716706;
	weights[17] 	= 0.007795703878703009104231566886027158083328291006988426437767339503243463061741824157978260830273203416096853015253412;

	nodes[18] 	= 1.8030080932132322991455443933282350213446659317056019612298751539312978440240878486195943625909444277453425380481784503670716706;
	weights[18] 	= 0.007795703878703009104231566886027158083328291006988426437767339503243463061741824157978260830273203416096853015253412;

	nodes[19] 	= -2.0043861812019168630021729922073069319781705495902278862996199623152736519475478418524903345189845203883531791457465864264097329;
	weights[19] 	= 0.003627059307059593886974807384291885844382838955375096802496650032439378569327108737420742848429259215059433556211635;

	nodes[20] 	= 2.0043861812019168630021729922073069319781705495902278862996199623152736519475478418524903345189845203883531791457465864264097329;
	weights[20] 	= 0.003627059307059593886974807384291885844382838955375096802496650032439378569327108737420742848429259215059433556211635;

	nodes[21] 	= -2.2060993827498389244867893524497173171740445651739901143514446939789999797724853344877279215305266638487239848936664084632191107;
	weights[21] 	= 0.00155404678847544832622841963480306695724352708262804210364571770507581918855494968368624558532725080297150393298321;

	nodes[22] 	= 2.2060993827498389244867893524497173171740445651739901143514446939789999797724853344877279215305266638487239848936664084632191107;
	weights[22] 	= 0.00155404678847544832622841963480306695724352708262804210364571770507581918855494968368624558532725080297150393298321;

	nodes[23] 	= -2.4081840151061351383253749740929747491755790743877956112075200803192930847874132639241548256456158179253978805382424642034598334;
	weights[23] 	= 0.0006128198796777667398733231353686889765691268876971174303586269770955174938240504002344439427064973153087109672564;

	nodes[24] 	= 2.4081840151061351383253749740929747491755790743877956112075200803192930847874132639241548256456158179253978805382424642034598334;
	weights[24] 	= 0.0006128198796777667398733231353686889765691268876971174303586269770955174938240504002344439427064973153087109672564;

	nodes[25] 	= -2.6106772442959039695906323798203744835366463492559493482874383154538081218186635882662942681957569066267538379984459861622271183;
	weights[25] 	= 0.0002222708587341610191074036725787454598986036485608524801398998017056059027967371605837449456699189685254238916101;

	nodes[26] 	= 2.6106772442959039695906323798203744835366463492559493482874383154538081218186635882662942681957569066267538379984459861622271183;
	weights[26] 	= 0.0002222708587341610191074036725787454598986036485608524801398998017056059027967371605837449456699189685254238916101;

	nodes[27] 	= -2.8136171849644748772483664054249885280078742896800360101665794649709775994743273658042217830627598960574808237427397356234807229;
	weights[27] 	= 0.000074097922186640848177792214727263764819846131385247870506145221695437952693609522350998272230997661433570963271;

	nodes[28] 	= 2.8136171849644748772483664054249885280078742896800360101665794649709775994743273658042217830627598960574808237427397356234807229;
	weights[28] 	= 0.000074097922186640848177792214727263764819846131385247870506145221695437952693609522350998272230997661433570963271;

	nodes[29] 	= -3.0170430069668739144510917583977354415542240846228096770920293816935777312998836460591898602540250164965673304923951072135544778;
	weights[29] 	= 0.000022686436750985642117846497374114459895274832095782546125661193977778126806659351477817690631759268676076894306;

	nodes[30] 	= 3.0170430069668739144510917583977354415542240846228096770920293816935777312998836460591898602540250164965673304923951072135544778;
	weights[30] 	= 0.000022686436750985642117846497374114459895274832095782546125661193977778126806659351477817690631759268676076894306;

	nodes[31] 	= -3.2209950496501374367392696529495994750394443851214451185700853863150981037468411858015629690470135537739878115563368932760355961;
	weights[31] 	= 6.373747949914014274630962937006733274487879632945629399190234357817015937971066974779564478612536534620075966e-6;

	nodes[32] 	= 3.2209950496501374367392696529495994750394443851214451185700853863150981037468411858015629690470135537739878115563368932760355961;
	weights[32] 	= 6.373747949914014274630962937006733274487879632945629399190234357817015937971066974779564478612536534620075966e-6;

	nodes[33] 	= -3.4255149448939753596019792906861266262608273377168863055552319123503665983795531295202734940981403857055107891788354037256736863;
	weights[33] 	= 1.64168746758970965676045705989549438207153741024892812971273605265282490389448091372177100217471447829565624e-6;

	nodes[34] 	= 3.4255149448939753596019792906861266262608273377168863055552319123503665983795531295202734940981403857055107891788354037256736863;
	weights[34] 	= 1.64168746758970965676045705989549438207153741024892812971273605265282490389448091372177100217471447829565624e-6;

	nodes[35] 	= -3.6306457501139446006850920016425721611848788640340541263076088534927079824742684217957743376709928642538211916360206790274907283;
	weights[35] 	= 3.8727287415554454218599212857844349132063558892491754887559503936511981741724318405087736197139011995516189e-7;

	nodes[36] 	= 3.6306457501139446006850920016425721611848788640340541263076088534927079824742684217957743376709928642538211916360206790274907283;
	weights[36] 	= 3.8727287415554454218599212857844349132063558892491754887559503936511981741724318405087736197139011995516189e-7;

	nodes[37] 	= -3.8364320925946053270083796706012407789719596110911975688410546842456806213585970158654851718135475037386535442538330796683017178;
	weights[37] 	= 8.357993955598467590003206933201601468053094773783136536179051560786535608065475610171364596402392037056858e-8;

	nodes[38] 	= 3.8364320925946053270083796706012407789719596110911975688410546842456806213585970158654851718135475037386535442538330796683017178;
	weights[38] 	= 8.357993955598467590003206933201601468053094773783136536179051560786535608065475610171364596402392037056858e-8;

	nodes[39] 	= -4.0429203267128023567423755660598855881744923780048798962114016833299891837340498813503296627558861053566858716621166605161158244;
	weights[39] 	= 1.648291390584633712823507687791358239649229243633847910282812973337225122789404714207033604790723750068575e-8;

	nodes[40] 	= 4.0429203267128023567423755660598855881744923780048798962114016833299891837340498813503296627558861053566858716621166605161158244;
	weights[40] 	= 1.648291390584633712823507687791358239649229243633847910282812973337225122789404714207033604790723750068575e-8;

	nodes[41] 	= -4.2501587058390204171728431939209624344666114602300245082950416887813374305361324383538558885311935406699089241141353309771447196;
	weights[41] 	= 2.96660859633519042186731950526100808934158543409521310732318817311959297602720722409522411411010283837379e-9;

	nodes[42] 	= 4.2501587058390204171728431939209624344666114602300245082950416887813374305361324383538558885311935406699089241141353309771447196;
	weights[42] 	= 2.96660859633519042186731950526100808934158543409521310732318817311959297602720722409522411411010283837379e-9;

	nodes[43] 	= -4.4581975709748297835026514026423545622772714872775419317902363188589523530623138535551353327853292865510254642214787239302277973;
	weights[43] 	= 4.8661361388782849417838512250665379675661009974906135036509383077667471710220393704597819283911202740501e-10;

	nodes[44] 	= 4.4581975709748297835026514026423545622772714872775419317902363188589523530623138535551353327853292865510254642214787239302277973;
	weights[44] 	= 4.8661361388782849417838512250665379675661009974906135036509383077667471710220393704597819283911202740501e-10;

	nodes[45] 	= -4.6670895585055892962190825090801411986869293798801993120035964240559886645152189374695544824703934661178343636250591756883042801;
	weights[45] 	= 7.263776118805397589019511001503191468725821853443166915408344236831956392513176238431277175330636606103e-11;

	nodes[46] 	= 4.6670895585055892962190825090801411986869293798801993120035964240559886645152189374695544824703934661178343636250591756883042801;
	weights[46] 	= 7.263776118805397589019511001503191468725821853443166915408344236831956392513176238431277175330636606103e-11;

	nodes[47] 	= -4.8768898298307781093147438326841384582547242282684002083202680586545082572747975047638275988532044869742023685941216183358779687;
	weights[47] 	= 9.8514672314147554660775086057176963033391455288220842140411769275956862291149330308105098114770350037e-12;

	nodes[48] 	= 4.8768898298307781093147438326841384582547242282684002083202680586545082572747975047638275988532044869742023685941216183358779687;
	weights[48] 	= 9.8514672314147554660775086057176963033391455288220842140411769275956862291149330308105098114770350037e-12;

	nodes[49] 	= -5.0876563260932980699340679974726319181417738015080177553760838207523792481184599958782904440665996469823933992182842307297628379;
	weights[49] 	= 1.211857532405606829427440193551598483908947015123096630561162838147643498240767436673117646575448025783e-12;

	nodes[50] 	= 5.0876563260932980699340679974726319181417738015080177553760838207523792481184599958782904440665996469823933992182842307297628379;
	weights[50] 	= 1.211857532405606829427440193551598483908947015123096630561162838147643498240767436673117646575448025783e-12;

	nodes[51] 	= -5.2994500517810534500782851301161305481111838765143093586299269060447245844518568861673530458791544280370023473918765284054590463;
	weights[51] 	= 1.34960869849926841639981971554954856796362535927343971049795535466126199169195237734366680746454374526e-13;

	nodes[52] 	= 5.2994500517810534500782851301161305481111838765143093586299269060447245844518568861673530458791544280370023473918765284054590463;
	weights[52] 	= 1.34960869849926841639981971554954856796362535927343971049795535466126199169195237734366680746454374526e-13;

	nodes[53] 	= -5.5123353916408397827595473044636827755544712750578243467515100855150865194602903996604108537461528845240769395327155640280475247;
	weights[53] 	= 1.35800087344856132326894215854762000140471029966256639609265609171689005253637980482318522890076040066e-14;

	nodes[54] 	= 5.5123353916408397827595473044636827755544712750578243467515100855150865194602903996604108537461528845240769395327155640280475247;
	weights[54] 	= 1.35800087344856132326894215854762000140471029966256639609265609171689005253637980482318522890076040066e-14;

	nodes[55] 	= -5.7263804661537204939354206363491579440035271083024273904588829326451407573083132127018213705328706203747293252477058757205725794;
	weights[55] 	= 1.231940328568637020413589546775758320227943567911544127272599308556479930523999035446282263068825013e-15;

	nodes[56] 	= 5.7263804661537204939354206363491579440035271083024273904588829326451407573083132127018213705328706203747293252477058757205725794;
	weights[56] 	= 1.231940328568637020413589546775758320227943567911544127272599308556479930523999035446282263068825013e-15;

	nodes[57] 	= -5.9416575318080135614367059041550114383900411373572367116214111357743688428872714681717845521097611072663351650416461700360430832;
	weights[57] 	= 1.0052255425278708016828319367643699813853473164311188611531921476053036890412057608596361295380256657e-16;

	nodes[58] 	= 5.9416575318080135614367059041550114383900411373572367116214111357743688428872714681717845521097611072663351650416461700360430832;
	weights[58] 	= 1.0052255425278708016828319367643699813853473164311188611531921476053036890412057608596361295380256657e-16;

	nodes[59] 	= -6.1582434336162890721247221470546179149399299888646981091363582491551238660395420472835062976488977950511102898262135679065364049;
	weights[59] 	= 7.35913250078785257166804392671320449156604130783277791838920506382967284302853005942200874648677308e-18;

	nodes[60] 	= 6.1582434336162890721247221470546179149399299888646981091363582491551238660395420472835062976488977950511102898262135679065364049;
	weights[60] 	= 7.35913250078785257166804392671320449156604130783277791838920506382967284302853005942200874648677308e-18;

	nodes[61] 	= -6.3762201188154268840755727001678503769701748404638618966590618638346188836491848704517669418611034228872341967841196186657394172;
	weights[61] 	= 4.82052570998512332109540759863593029398147484558793435458100173456344600359682147260098175940558558e-19;

	nodes[62] 	= 6.3762201188154268840755727001678503769701748404638618966590618638346188836491848704517669418611034228872341967841196186657394172;
	weights[62] 	= 4.82052570998512332109540759863593029398147484558793435458100173456344600359682147260098175940558558e-19;

	nodes[63] 	= -6.5956752225409023357181009339830236095879545697988200220560190475303390382869061926538749986889981217654518499089849537599869182;
	weights[63] 	= 2.81697902542034358582914896521296088297646711905661800115356862038212575017547261886300190599690063e-20;

	nodes[64] 	= 6.5956752225409023357181009339830236095879545697988200220560190475303390382869061926538749986889981217654518499089849537599869182;
	weights[64] 	= 2.81697902542034358582914896521296088297646711905661800115356862038212575017547261886300190599690063e-20;

	nodes[65] 	= -6.8167027385795487785981048194273803704915049614817582062842809996983284076596490577886654980784043836922273929381516269752116237;
	weights[65] 	= 1.4638683297363228225199691326653973577516272958081994393997026152324014095768994823040453368515602e-21;

	nodes[66] 	= 6.8167027385795487785981048194273803704915049614817582062842809996983284076596490577886654980784043836922273929381516269752116237;
	weights[66] 	= 1.4638683297363228225199691326653973577516272958081994393997026152324014095768994823040453368515602e-21;

	nodes[67] 	= -7.039403791213810047075887601145413347017764347929855566480870326817529011562574461515937809522907817831620084995938212930241908;
	weights[67] 	= 6.7411887298014896588286987619679528961027560001682369229497098209192800736866343319599802100744389e-23;

	nodes[68] 	= 7.039403791213810047075887601145413347017764347929855566480870326817529011562574461515937809522907817831620084995938212930241908;
	weights[68] 	= 6.7411887298014896588286987619679528961027560001682369229497098209192800736866343319599802100744389e-23;

	nodes[69] 	= -7.2638875278553741208428288396723549404153101215795516712176560243662150307819755081788815101391847473797920834977111275320307762;
	weights[69] 	= 2.7405597239380499014839663124401098616558389274774641940199083859572780545868274766573157378532722e-24;

	nodes[70] 	= 7.2638875278553741208428288396723549404153101215795516712176560243662150307819755081788815101391847473797920834977111275320307762;
	weights[70] 	= 2.7405597239380499014839663124401098616558389274774641940199083859572780545868274766573157378532722e-24;

	nodes[71] 	= -7.4902721568710232512212530455253060415579298458767079998089141847629354265820253196057105621108303896202921740489773065543447577;
	weights[71] 	= 9.795170874232593386840212454807195271589213182870476423352493251649797627748729048695037457672062e-26;

	nodes[72] 	= 7.4902721568710232512212530455253060415579298458767079998089141847629354265820253196057105621108303896202921740489773065543447577;
	weights[72] 	= 9.795170874232593386840212454807195271589213182870476423352493251649797627748729048695037457672062e-26;

	nodes[73] 	= -7.7186861610617439214355422225081828058384686569005463835349326896273396114883012653484230693067280597385201693858498045832029368;
	weights[73] 	= 3.063988516365659001037696803624672614077175070651272306679461543968062012234231364882123376494725e-27;

	nodes[74] 	= 7.7186861610617439214355422225081828058384686569005463835349326896273396114883012653484230693067280597385201693858498045832029368;
	weights[74] 	= 3.063988516365659001037696803624672614077175070651272306679461543968062012234231364882123376494725e-27;

	nodes[75] 	= -7.9492697251276722199358160842178390820877912660808375558256032922997733043698262021630441037281451934570342635903741301944377433;
	weights[75] 	= 8.346529095183079131478087845488279792267806882628164219752429615204215299233677409789228688717101e-29;

	nodes[76] 	= 7.9492697251276722199358160842178390820877912660808375558256032922997733043698262021630441037281451934570342635903741301944377433;
	weights[76] 	= 8.346529095183079131478087845488279792267806882628164219752429615204215299233677409789228688717101e-29;

	nodes[77] 	= -8.1821764257789714415311679311226069487515953117284746291857415825074161698192227272608048617333951381411917899466453047054005834;
	weights[77] 	= 1.969212898529051404763910718056147487757080207718966735532009623287780473745246050168550849004102e-30;

	nodes[78] 	= 8.1821764257789714415311679311226069487515953117284746291857415825074161698192227272608048617333951381411917899466453047054005834;
	weights[78] 	= 1.969212898529051404763910718056147487757080207718966735532009623287780473745246050168550849004102e-30;

	nodes[79] 	= -8.4175752468453181337883481476020519810785771413341744868297766548965367320457066968521671218477885588536552591345688484123191516;
	weights[79] 	= 3.999668716184649720915716167617314290765713126519611303433775540881035305145922373244771213962172e-32;

	nodes[80] 	= 8.4175752468453181337883481476020519810785771413341744868297766548965367320457066968521671218477885588536552591345688484123191516;
	weights[80] 	= 3.999668716184649720915716167617314290765713126519611303433775540881035305145922373244771213962172e-32;

	nodes[81] 	= -8.6556530000977209768707308253205358814641820711845998741845359231257121304142759863153762000684391246351725880794262364703871462;
	weights[81] 	= 6.946915697583523828883763719196093516535449332814457682074451365429832845891078009503067682897806e-34;

	nodes[82] 	= 8.6556530000977209768707308253205358814641820711845998741845359231257121304142759863153762000684391246351725880794262364703871462;
	weights[82] 	= 6.946915697583523828883763719196093516535449332814457682074451365429832845891078009503067682897806e-34;

	nodes[83] 	= -8.8966172574222744964443368509688478325900260967971539739202375564132686429994921557459777094634571268769931752081136034726699565;
	weights[83] 	= 1.024141015037803982161009747187590483605636073662648020440275091701170332733525553213439673017032e-35;

	nodes[84] 	= 8.8966172574222744964443368509688478325900260967971539739202375564132686429994921557459777094634571268769931752081136034726699565;
	weights[84] 	= 1.024141015037803982161009747187590483605636073662648020440275091701170332733525553213439673017032e-35;

	nodes[85] 	= -9.1406999342794101290122192421550702027573149602934970487750830243550586566490437290546878600683211265779600218112171716934146421;
	weights[85] 	= 1.270887519650530913936612731859785192898917962021175313566936784720602064810819040631126645552733e-37;

	nodes[86] 	= 9.1406999342794101290122192421550702027573149602934970487750830243550586566490437290546878600683211265779600218112171716934146421;
	weights[86] 	= 1.270887519650530913936612731859785192898917962021175313566936784720602064810819040631126645552733e-37;

	nodes[87] 	= -9.3881617122605030847298666412650088774904793137924686983003188487600704473230695369086424976071799412076975025730117080700678802;
	weights[87] 	= 1.315116521867814318664046813238142546355312440161461753582989812672712947644672401751719940578149e-39;

	nodes[88] 	= 9.3881617122605030847298666412650088774904793137924686983003188487600704473230695369086424976071799412076975025730117080700678802;
	weights[88] 	= 1.315116521867814318664046813238142546355312440161461753582989812672712947644672401751719940578149e-39;

	nodes[89] 	= -9.639297556479173324191917204628616934362809032905664390884345736582097534697826441409086788339876124406686488912577146517535086;
	weights[89] 	= 1.122868035649218690171601438235139599479909241656845714659651997048644618243760338519713273115126e-41;

	nodes[90] 	= 9.639297556479173324191917204628616934362809032905664390884345736582097534697826441409086788339876124406686488912577146517535086;
	weights[90] 	= 1.122868035649218690171601438235139599479909241656845714659651997048644618243760338519713273115126e-41;

	nodes[91] 	= -9.8944436816224320837646866408285061491758029211831599147141335075009008250192967779908775601368477165333153316637950935884317507;
	weights[91] 	= 7.81558614414807535430732162252848633387264863540001344202122346733021247479935996662641294478893e-44;

	nodes[92] 	= 9.8944436816224320837646866408285061491758029211831599147141335075009008250192967779908775601368477165333153316637950935884317507;
	weights[92] 	= 7.81558614414807535430732162252848633387264863540001344202122346733021247479935996662641294478893e-44;

	nodes[93] 	= -10.153986464937166637885046449016714288182857900877246272055448333760436785624467598681340128590528399984825771287615772317699143;
	weights[93] 	= 4.373755429759037285461956696183856634551273321864082273484282217337890950052851273072982278244967e-46;

	nodes[94] 	= 10.153986464937166637885046449016714288182857900877246272055448333760436785624467598681340128590528399984825771287615772317699143;
	weights[94] 	= 4.373755429759037285461956696183856634551273321864082273484282217337890950052851273072982278244967e-46;

	nodes[95] 	= -10.418374021858449602859150121814529505571959505957769046345143976320928514846139201654203667523127389991260260117319074103665324;
	weights[95] 	= 1.9366833085713337982047597594142511385040177236673792332178234609049119508209958820458205187266468e-48;

	nodes[96] 	= 10.418374021858449602859150121814529505571959505957769046345143976320928514846139201654203667523127389991260260117319074103665324;
	weights[96] 	= 1.9366833085713337982047597594142511385040177236673792332178234609049119508209958820458205187266468e-48;

	nodes[97] 	= -10.688131495402112675687235548399668222184362485727744878024552966922022438522438050103061195229251426754216851992854602431439875;
	weights[97] 	= 6.659764607620963459839435027447973905319127934528336318211779330936330918327734424129248057164379e-51;

	nodes[98] 	= 10.688131495402112675687235548399668222184362485727744878024552966922022438522438050103061195229251426754216851992854602431439875;
	weights[98] 	= 6.659764607620963459839435027447973905319127934528336318211779330936330918327734424129248057164379e-51;

	nodes[99] 	= -10.963881642425229201028327117085925200649721347532978033856224025183803962457357258883424669803770544827593951348375666518772374;
	weights[99] 	= 1.7396913258105925077875636741817732020345756979221284555044528796388985784734152977297379867430192e-53;

	nodes[100] 	= 10.963881642425229201028327117085925200649721347532978033856224025183803962457357258883424669803770544827593951348375666518772374;
	weights[100] 	= 1.7396913258105925077875636741817732020345756979221284555044528796388985784734152977297379867430192e-53;

	nodes[101] 	= -11.246373170717687961170144002627784474945393369706756430466597097736149914582729398218411789960490363374892465952006870840968901;
	weights[101] 	= 3.362279707255244267722803177655667210080569334590926531569163772130434927431427602103392231060885e-56;

	nodes[102] 	= 11.246373170717687961170144002627784474945393369706756430466597097736149914582729398218411789960490363374892465952006870840968901;
	weights[102] 	= 3.362279707255244267722803177655667210080569334590926531569163772130434927431427602103392231060885e-56;

	nodes[103] 	= -11.536520759384243191615387970746921526666616672644368546178512680747681610161324289878609454039501533170988676169035631195730614;
	weights[103] 	= 4.6560392499730824305554989167053750923293280355880631025949251736110651633046483509901130597866074e-59;

	nodes[104] 	= 11.536520759384243191615387970746921526666616672644368546178512680747681610161324289878609454039501533170988676169035631195730614;
	weights[104] 	= 4.6560392499730824305554989167053750923293280355880631025949251736110651633046483509901130597866074e-59;

	nodes[105] 	= -11.835463313889940083057327084632987055603299064254756050949709154930110107274522668943834066338527331436318524428802802070081124;
	weights[105] 	= 4.44007645249860725897774682946347272495611931922138179652508263016396183991602882052731870651763945e-62;

	nodes[106] 	= 11.835463313889940083057327084632987055603299064254756050949709154930110107274522668943834066338527331436318524428802802070081124;
	weights[106] 	= 4.44007645249860725897774682946347272495611931922138179652508263016396183991602882052731870651763945e-62;

	nodes[107] 	= -12.144651884544359389041709992095553750230973182535885527504635858053373196371351184253127806591573426869048783749650470348190078;
	weights[107] 	= 2.77307517226592082249732614162442400706523179816244456584987362907557153501453131408114997345391769e-65;

	nodes[108] 	= 12.144651884544359389041709992095553750230973182535885527504635858053373196371351184253127806591573426869048783749650470348190078;
	weights[108] 	= 2.77307517226592082249732614162442400706523179816244456584987362907557153501453131408114997345391769e-65;

	nodes[109] 	= -12.465988324400742987232957109961445751796348132194315608793791599645835529749241863619464713214875979034994111411082164199581934;
	weights[109] 	= 1.0626701542492397992419639810763298311944205183004294445963097139649369189603212043828809485328286494e-68;

	nodes[110] 	= 12.465988324400742987232957109961445751796348132194315608793791599645835529749241863619464713214875979034994111411082164199581934;
	weights[110] 	= 1.0626701542492397992419639810763298311944205183004294445963097139649369189603212043828809485328286494e-68;

	nodes[111] 	= -12.802056306622089588549251578492101237615520933434704559282974729698973080827542141838969092389626490963350717180886359921164804;
	weights[111] 	= 2.2885780042663317310164657117290401574831898595608522624547049274837327916805081232339934709476867111e-72;

	nodes[112] 	= 12.802056306622089588549251578492101237615520933434704559282974729698973080827542141838969092389626490963350717180886359921164804;
	weights[112] 	= 2.2885780042663317310164657117290401574831898595608522624547049274837327916805081232339934709476867111e-72;

	nodes[113] 	= -13.156534338879861971532290531231023034476110916866264851815593055779046023052002074949572845018963260973484485089024806957250886;
	weights[113] 	= 2.44756877530381627361196221397681571888311475996538705593852116496753622853604987287702979025779916968e-76;

	nodes[114] 	= 13.156534338879861971532290531231023034476110916866264851815593055779046023052002074949572845018963260973484485089024806957250886;
	weights[114] 	= 2.44756877530381627361196221397681571888311475996538705593852116496753622853604987287702979025779916968e-76;

	nodes[115] 	= -13.535007172173161433432485587219937093324861635640970534851576849245709946183285506118018110401368255079683381120658834036957048;
	weights[115] 	= 1.0797361898132381829663911282381290997208033422961756034246548105446982556386003028299974990900578198471e-80;

	nodes[116] 	= 13.535007172173161433432485587219937093324861635640970534851576849245709946183285506118018110401368255079683381120658834036957048;
	weights[116] 	= 1.0797361898132381829663911282381290997208033422961756034246548105446982556386003028299974990900578198471e-80;

	nodes[117] 	= -13.946787810773683124315037266857585816435152092360990669695040161569040042717970197583035527725360323993715841826567170776515381;
	weights[117] 	= 1.44827842764901532565996202774090729634849370786144985347927316275647350343644629629194515810512103972625e-85;

	nodes[118] 	= 13.946787810773683124315037266857585816435152092360990669695040161569040042717970197583035527725360323993715841826567170776515381;
	weights[118] 	= 1.44827842764901532565996202774090729634849370786144985347927316275647350343644629629194515810512103972625e-85;

	nodes[119] 	= -14.409953151712163820883070750075493618967151399690833880302948371363851233641622503852723282086241775373976830482293588508393221;
	weights[119] 	= 3.302719555394582352315848834245011128480418425986798258887145795451666140064704809282249703654427769318733e-91;

	nodes[120] 	= 14.409953151712163820883070750075493618967151399690833880302948371363851233641622503852723282086241775373976830482293588508393221;
	weights[120] 	= 3.302719555394582352315848834245011128480418425986798258887145795451666140064704809282249703654427769318733e-91;

	nodes[121] 	= -14.971833315919481027081605960548656025268594601058963765073458203702954328112416568475124882052171024203784300444909754764271361;
	weights[121] 	= 2.90884409086247733009836818057871255224162673127279645774839554824730097051315403606865988517516563308092151e-98;

	nodes[122] 	= 14.971833315919481027081605960548656025268594601058963765073458203702954328112416568475124882052171024203784300444909754764271361;
	weights[122] 	= 2.90884409086247733009836818057871255224162673127279645774839554824730097051315403606865988517516563308092151e-98;

}
#endif /*(__Gauss_Hermite_Nodes_and_Weights_123_hpp__)*/