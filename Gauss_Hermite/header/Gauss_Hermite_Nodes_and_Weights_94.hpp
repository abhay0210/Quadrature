//
//        Gauss_Hermite_Nodes_and_Weights_94.hpp
//
//
//        Created by Sivaram Ambikasaran on 2014-02-22.09:42:47.
//
//
//        Array of nodes and weights for Gauss Hermite quadrature of order 94.
//
//

#ifndef __Gauss_Hermite_Nodes_and_Weights_94_hpp__
#define __Gauss_Hermite_Nodes_and_Weights_94_hpp__

void Gauss_Hermite_Nodes_and_Weights_94(long double*& nodes, long double*& weights) {
	nodes	= new long double[94];
	weights	= new long double[94];

	nodes[0] 	= -0.11425913587653955703774591948882006133791174705235752895063175183048136539330568121871027609738288033422962046142671326844120582;
	weights[0] 	= 0.2255595142545265228799397855086678565746304985962295065828840107537991801592139611238859336911304001218988885690208088771097842;

	nodes[1] 	= 0.11425913587653955703774591948882006133791174705235752895063175183048136539330568121871027609738288033422962046142671326844120582;
	weights[1] 	= 0.2255595142545265228799397855086678565746304985962295065828840107537991801592139611238859336911304001218988885690208088771097842;

	nodes[2] 	= -0.34280898846921668213122970347283211772468422642074184173085493442560801353057136022779859418444554756782629942608310800085537832;
	weights[2] 	= 0.203242048889416672277582030622287965169334985647228556602004545074506728759571331778584711193644812468766188998315991992965953;

	nodes[3] 	= 0.34280898846921668213122970347283211772468422642074184173085493442560801353057136022779859418444554756782629942608310800085537832;
	weights[3] 	= 0.203242048889416672277582030622287965169334985647228556602004545074506728759571331778584711193644812468766188998315991992965953;

	nodes[4] 	= -0.57145369719413511708921555145358581019230792040910749441215551779833465795465253392162423853190671313904648675562260948696020891;
	weights[4] 	= 0.1649941365520034897281064364590138433043439887923169592069693981062774484316784026881090275367893443752797142274056539152609;

	nodes[5] 	= 0.57145369719413511708921555145358581019230792040910749441215551779833465795465253392162423853190671313904648675562260948696020891;
	weights[5] 	= 0.1649941365520034897281064364590138433043439887923169592069693981062774484316784026881090275367893443752797142274056539152609;

	nodes[6] 	= -0.8002568793791399034329938000322230896588353925048472566422767860090535655633348207262407127072478233005361092033010948828459428;
	weights[6] 	= 0.120649610607260044267267252358931526724348309886727285801288821106333594559072511816201471986706624561551505885312492334128;

	nodes[7] 	= 0.8002568793791399034329938000322230896588353925048472566422767860090535655633348207262407127072478233005361092033010948828459428;
	weights[7] 	= 0.120649610607260044267267252358931526724348309886727285801288821106333594559072511816201471986706624561551505885312492334128;

	nodes[8] 	= -1.0292827264188050235345231774593958710951884370109295395307919001991176075046783510898071550404217834393078524733246796544167873;
	weights[8] 	= 0.07943921517210539824524542609298506777548872849694901910411279545580549024159225747581484931781968683533708182773115710713;

	nodes[9] 	= 1.0292827264188050235345231774593958710951884370109295395307919001991176075046783510898071550404217834393078524733246796544167873;
	weights[9] 	= 0.07943921517210539824524542609298506777548872849694901910411279545580549024159225747581484931781968683533708182773115710713;

	nodes[10] 	= -1.2585962419071160729101175510884034421153859217612612794110760103700672664533984691188993407075548306439374644747030183664208671;
	weights[10] 	= 0.0470752882117971411823637929214441341374047329986595156387802154315527701534893765949987284874272659310632180106088573934;

	nodes[11] 	= 1.2585962419071160729101175510884034421153859217612612794110760103700672664533984691188993407075548306439374644747030183664208671;
	weights[11] 	= 0.0470752882117971411823637929214441341374047329986595156387802154315527701534893765949987284874272659310632180106088573934;

	nodes[12] 	= -1.4882634884931584135068997871247931119691188198688792273095687490993536697784372349218396155510076184632435363274502997540356738;
	weights[12] 	= 0.025092532015162046050008364052549393742275464785936210400102034151251031121852901031826246577145084447911196970339123947;

	nodes[13] 	= 1.4882634884931584135068997871247931119691188198688792273095687490993536697784372349218396155510076184632435363274502997540356738;
	weights[13] 	= 0.025092532015162046050008364052549393742275464785936210400102034151251031121852901031826246577145084447911196970339123947;

	nodes[14] 	= -1.7183518462708217501039070364770918816227447575154303278149866924419894106017399061445707691199431883866712202735557996486190384;
	weights[14] 	= 0.01202207095066532551087114422552732587323626187239887372196337549063779061985902435626735146505854787085610314281050645;

	nodes[15] 	= 1.7183518462708217501039070364770918816227447575154303278149866924419894106017399061445707691199431883866712202735557996486190384;
	weights[15] 	= 0.01202207095066532551087114422552732587323626187239887372196337549063779061985902435626735146505854787085610314281050645;

	nodes[16] 	= -1.9489302857683152935537772727523702203092561375548617141246088175231367915173801043043132694534422368463390651366725396177218652;
	weights[16] 	= 0.0051728592008298611507765572665090185816906780474883810909211356358204135410535726067880591179118234512069521144025205;

	nodes[17] 	= 1.9489302857683152935537772727523702203092561375548617141246088175231367915173801043043132694534422368463390651366725396177218652;
	weights[17] 	= 0.0051728592008298611507765572665090185816906780474883810909211356358204135410535726067880591179118234512069521144025205;

	nodes[18] 	= -2.1800696589332402433965143845870728246916055851824324793707585500021791590010957446963652766822233001607655479524281980023047571;
	weights[18] 	= 0.0019969762869401301078119394924111689254893371239696818037436382828772359087801234201922798634834959308304570845411564;

	nodes[19] 	= 2.1800696589332402433965143845870728246916055851824324793707585500021791590010957446963652766822233001607655479524281980023047571;
	weights[19] 	= 0.0019969762869401301078119394924111689254893371239696818037436382828772359087801234201922798634834959308304570845411564;

	nodes[20] 	= -2.4118430119268002538225457569868183565465750863716813446145116802864953781178999335749880175956424399848301993458671414161661445;
	weights[20] 	= 0.000690905340929638199230868180077328371858843338056920982889036853417790424515691115178489261636946731125111682556444;

	nodes[21] 	= 2.4118430119268002538225457569868183565465750863716813446145116802864953781178999335749880175956424399848301993458671414161661445;
	weights[21] 	= 0.000690905340929638199230868180077328371858843338056920982889036853417790424515691115178489261636946731125111682556444;

	nodes[22] 	= -2.6443259240630742881323581922847711050505728526202954588340356821328586527308730427746399206120757405933843573853699575242272413;
	weights[22] 	= 0.000213951321997146414012871440561815441051919659006122194068221452531277663796954899202218340958274661958268894515037;

	nodes[23] 	= 2.6443259240630742881323581922847711050505728526202954588340356821328586527308730427746399206120757405933843573853699575242272413;
	weights[23] 	= 0.000213951321997146414012871440561815441051919659006122194068221452531277663796954899202218340958274661958268894515037;

	nodes[24] 	= -2.8775968778776947333412929204541103439602390597544364728279035382035469796149581881889633007154629159899400964069927756440045617;
	weights[24] 	= 0.000059216205461426212917624056010806316099672354904218398144643144796409280480351165902879494760954567947832683923275;

	nodes[25] 	= 2.8775968778776947333412929204541103439602390597544364728279035382035469796149581881889633007154629159899400964069927756440045617;
	weights[25] 	= 0.000059216205461426212917624056010806316099672354904218398144643144796409280480351165902879494760954567947832683923275;

	nodes[26] 	= -3.1117376661126467255779100642759294712805532945076667743030607587158979180295634648685678287941511152406045310559722633428761177;
	weights[26] 	= 0.00001462514745736824405493621230802058321340005802461722285745599425404241654058758879191664971063132056863650900546;

	nodes[27] 	= 3.1117376661126467255779100642759294712805532945076667743030607587158979180295634648685678287941511152406045310559722633428761177;
	weights[27] 	= 0.00001462514745736824405493621230802058321340005802461722285745599425404241654058758879191664971063132056863650900546;

	nodes[28] 	= -3.346833842396291207588265953582277746153554192008140287558532914528619861256490526229907359265967604351904617312262172004196719;
	weights[28] 	= 3.21751237823686554432632207880217016636566780885453185992456933101820292166222583032652025907001166169531208582e-6;

	nodes[29] 	= 3.346833842396291207588265953582277746153554192008140287558532914528619861256490526229907359265967604351904617312262172004196719;
	weights[29] 	= 3.21751237823686554432632207880217016636566780885453185992456933101820292166222583032652025907001166169531208582e-6;

	nodes[30] 	= -3.5829752236268819544989976792759774816259688364151487784278566550867598013967006832039537329180514740352896424175152149145306323;
	weights[30] 	= 6.2927723529831531627309091975645892249148158682121527925679243371618107615115338332152105331815352239538664192e-7;

	nodes[31] 	= 3.5829752236268819544989976792759774816259688364151487784278566550867598013967006832039537329180514740352896424175152149145306323;
	weights[31] 	= 6.2927723529831531627309091975645892249148158682121527925679243371618107615115338332152105331815352239538664192e-7;

	nodes[32] 	= -3.8202564535947250047608940463912151118726548896453468987737650340711184189266139759038200064810950627038695618584190941655621157;
	weights[32] 	= 1.0917307724251030925434326104245611482739687261766166441456609697409681379361348559987168100776256070108047048e-7;

	nodes[33] 	= 3.8202564535947250047608940463912151118726548896453468987737650340711184189266139759038200064810950627038695618584190941655621157;
	weights[33] 	= 1.0917307724251030925434326104245611482739687261766166441456609697409681379361348559987168100776256070108047048e-7;

	nodes[34] 	= -4.058777639282555235071526134111163208221093598811861871479407937686460923576711237951179839818962819057904018577430551945011142;
	weights[34] 	= 1.676066012388522377558565603214306453362651294961228188464731992060414108586018624692437058590159528611369058e-8;

	nodes[35] 	= 4.058777639282555235071526134111163208221093598811861871479407937686460923576711237951179839818962819057904018577430551945011142;
	weights[35] 	= 1.676066012388522377558565603214306453362651294961228188464731992060414108586018624692437058590159528611369058e-8;

	nodes[36] 	= -4.2986450736710038534491861454881804816457093712043181487632380510468094360553627235001278371987479817902028760679200820799310597;
	weights[36] 	= 2.270963504317813059085017156341217194266927767411358313946930580600909807184042791326426727141694693655931906e-9;

	nodes[37] 	= 4.2986450736710038534491861454881804816457093712043181487632380510468094360553627235001278371987479817902028760679200820799310597;
	weights[37] 	= 2.270963504317813059085017156341217194266927767411358313946930580600909807184042791326426727141694693655931906e-9;

	nodes[38] 	= -4.5399720618862156577377531243913846803309689431076165650049803974349939161204299798724215528868681599579859927868433107441862366;
	weights[38] 	= 2.70766223592474311618177454573064078237060262887598901631709783641643494512835882970434566702842104379153513e-10;

	nodes[39] 	= 4.5399720618862156577377531243913846803309689431076165650049803974349939161204299798724215528868681599579859927868433107441862366;
	weights[39] 	= 2.70766223592474311618177454573064078237060262887598901631709783641643494512835882970434566702842104379153513e-10;

	nodes[40] 	= -4.7828798713474468834948411408354046809968957128412290951539547611164193164312102433055861913131953447133008594635235065549797372;
	weights[40] 	= 2.8316127909785095506724617275003317310746931261270373220405627029173093407671671514004174957233070015684118e-11;

	nodes[41] 	= 4.7828798713474468834948411408354046809968957128412290951539547611164193164312102433055861913131953447133008594635235065549797372;
	weights[41] 	= 2.8316127909785095506724617275003317310746931261270373220405627029173093407671671514004174957233070015684118e-11;

	nodes[42] 	= -5.0274988314577830711835058390337760965404799007355645779134621305328021452832379430704437537089928872652739445113157469595937303;
	weights[42] 	= 2.5880423909347305887384293857183365306628257621498048232050766887775583549141005489303548319855237641536045e-12;

	nodes[43] 	= 5.0274988314577830711835058390337760965404799007355645779134621305328021452832379430704437537089928872652739445113157469595937303;
	weights[43] 	= 2.5880423909347305887384293857183365306628257621498048232050766887775583549141005489303548319855237641536045e-12;

	nodes[44] 	= -5.2739696146779717975900600762498446796305669135144140690487044909334679122038381698537016319807588228507834452884254654469795675;
	weights[44] 	= 2.05914259941191190834116811226852419038946053444475998047434438078104893543002157592920254612800887228501e-13;

	nodes[45] 	= 5.2739696146779717975900600762498446796305669135144140690487044909334679122038381698537016319807588228507834452884254654469795675;
	weights[45] 	= 2.05914259941191190834116811226852419038946053444475998047434438078104893543002157592920254612800887228501e-13;

	nodes[46] 	= -5.5224447390110499297279021661523919371113214953785358639789174277680106932724879033728176344825986019039215352117647307813676337;
	weights[46] 	= 1.419954809596509393807479280699033438464760043529632110670343412730693127856954131239439377131472475620178e-14;

	nodes[47] 	= 5.5224447390110499297279021661523919371113214953785358639789174277680106932724879033728176344825986019039215352117647307813676337;
	weights[47] 	= 1.419954809596509393807479280699033438464760043529632110670343412730693127856954131239439377131472475620178e-14;

	nodes[48] 	= -5.773090342673630108310337132215384311810646235240962321699243290339757395599999804473837795902176220487558589436444345638304666;
	weights[48] 	= 8.44546539931089720048124535926503639346890223602449088475333719085674003050167948951320259372425960266118e-16;

	nodes[49] 	= 5.773090342673630108310337132215384311810646235240962321699243290339757395599999804473837795902176220487558589436444345638304666;
	weights[49] 	= 8.44546539931089720048124535926503639346890223602449088475333719085674003050167948951320259372425960266118e-16;

	nodes[50] 	= -6.0260882959858305869445901573064421601403393883739289939430991322194343890763647391684234095370837624728992415577295188337761953;
	weights[50] 	= 4.30908940925292630441743078286722115758174319598788281818232309147584513495961626057937146029704129738091e-17;

	nodes[51] 	= 6.0260882959858305869445901573064421601403393883739289939430991322194343890763647391684234095370837624728992415577295188337761953;
	weights[51] 	= 4.30908940925292630441743078286722115758174319598788281818232309147584513495961626057937146029704129738091e-17;

	nodes[52] 	= -6.2816387346344915694842668553241519109658820644467191918132735350771704360524854170302435502284968807232836883152118970606178321;
	weights[52] 	= 1.87474465936288672761069433163308061062501143618291397744061427536090203348857205221466737838090530728286e-18;

	nodes[53] 	= 6.2816387346344915694842668553241519109658820644467191918132735350771704360524854170302435502284968807232836883152118970606178321;
	weights[53] 	= 1.87474465936288672761069433163308061062501143618291397744061427536090203348857205221466737838090530728286e-18;

	nodes[54] 	= -6.5399631244304134342823711607634198942062420855859778579906508271264936872540573631956757538948974862810830059937657391079068267;
	weights[54] 	= 6.9081875027574158615211773754040901854308109904039383100793362674399044338466432738653744645501446198769e-20;

	nodes[55] 	= 6.5399631244304134342823711607634198942062420855859778579906508271264936872540573631956757538948974862810830059937657391079068267;
	weights[55] 	= 6.9081875027574158615211773754040901854308109904039383100793362674399044338466432738653744645501446198769e-20;

	nodes[56] 	= -6.8013080034124767179244546801192602212115615116673660804983761880631106095470714899804567073195738098086902602835810992285308238;
	weights[56] 	= 2.1397391826730635591785267144453430896182625210999371765443157999138883167286260467716474754962756966177e-21;

	nodes[57] 	= 6.8013080034124767179244546801192602212115615116673660804983761880631106095470714899804567073195738098086902602835810992285308238;
	weights[57] 	= 2.1397391826730635591785267144453430896182625210999371765443157999138883167286260467716474754962756966177e-21;

	nodes[58] 	= -7.0659495970458314024425965478029965623172703249833647787421613792479489104577087544538595639353379926106575509366860458714340906;
	weights[58] 	= 5.5235547418540962292948231124200222704940743938547629577649480421894312089257494828140207338820786681338e-23;

	nodes[59] 	= 7.0659495970458314024425965478029965623172703249833647787421613792479489104577087544538595639353379926106575509366860458714340906;
	weights[59] 	= 5.5235547418540962292948231124200222704940743938547629577649480421894312089257494828140207338820786681338e-23;

	nodes[60] 	= -7.3341995730571179308109157144368816644967861239912753430539991047538353540538140841476800923499628857798537976594439149758308274;
	weights[60] 	= 1.1768586219954585021063370884597639790759909183723250270282864271533180520878868198780055900129338425508e-24;

	nodes[61] 	= 7.3341995730571179308109157144368816644967861239912753430539991047538353540538140841476800923499628857798537976594439149758308274;
	weights[61] 	= 1.1768586219954585021063370884597639790759909183723250270282864271533180520878868198780055900129338425508e-24;

	nodes[62] 	= -7.6064123046955788015070199971832358599756034072530081919769247098722688959199369757684426065093060301393391419954375901533247377;
	weights[62] 	= 2.0467667970915471800672660788883242366492454082927080434417275086650457740808276901605434252284171347019e-26;

	nodes[63] 	= 7.6064123046955788015070199971832358599756034072530081919769247098722688959199369757684426065093060301393391419954375901533247377;
	weights[63] 	= 2.0467667970915471800672660788883242366492454082927080434417275086650457740808276901605434252284171347019e-26;

	nodes[64] 	= -7.8829941618009408972642501161036283720977066356343717246390999992015105041170587925379571941245214127374343545481090037490748899;
	weights[64] 	= 2.8689474946571139629399162476994121483593955991600771204369544728456435596308671555108922528703268996298e-28;

	nodes[65] 	= 7.8829941618009408972642501161036283720977066356343717246390999992015105041170587925379571941245214127374343545481090037490748899;
	weights[65] 	= 2.8689474946571139629399162476994121483593955991600771204369544728456435596308671555108922528703268996298e-28;

	nodes[66] 	= -8.1644155757609355931328010179151643152906232387226404126074365680887151655653721238764002217901816800028476005043483350812546368;
	weights[66] 	= 3.1936039953280975427007078534233348588591414058838415423595772366104229846780720061271588370280630727045e-30;

	nodes[67] 	= 8.1644155757609355931328010179151643152906232387226404126074365680887151655653721238764002217901816800028476005043483350812546368;
	weights[67] 	= 3.1936039953280975427007078534233348588591414058838415423595772366104229846780720061271588370280630727045e-30;

	nodes[68] 	= -8.451226974198886964804301047320591755422633423821244866159697954793983200710264847644744825548790691203158036081503745485445104;
	weights[68] 	= 2.7749265480534541586118594167368563541633146215081581847422158515764126053164448694539457256875116867515e-32;

	nodes[69] 	= 8.451226974198886964804301047320591755422633423821244866159697954793983200710264847644744825548790691203158036081503745485445104;
	weights[69] 	= 2.7749265480534541586118594167368563541633146215081581847422158515764126053164448694539457256875116867515e-32;

	nodes[70] 	= -8.744080236022313954169111753800149752827790802619455388309615876852296824626236395342935727121802266181730642403227658910007959;
	weights[70] 	= 1.8440635697521720018574807468332986544441844857812824820934701538935475257922833220460159441825718077835e-34;

	nodes[71] 	= 8.744080236022313954169111753800149752827790802619455388309615876852296824626236395342935727121802266181730642403227658910007959;
	weights[71] 	= 1.8440635697521720018574807468332986544441844857812824820934701538935475257922833220460159441825718077835e-34;

	nodes[72] 	= -9.0437582257661132747159249087497972562331552104893961800687563149580113820975230729817846253212416203285675955352316204177758324;
	weights[72] 	= 9.1463558192667055530586787147196518934682357517963314095967288800532421938295378918064610236804558015232e-37;

	nodes[73] 	= 9.0437582257661132747159249087497972562331552104893961800687563149580113820975230729817846253212416203285675955352316204177758324;
	weights[73] 	= 9.1463558192667055530586787147196518934682357517963314095967288800532421938295378918064610236804558015232e-37;

	nodes[74] 	= -9.3512165084081829598661611222093339595888793209661012904929704408221654894462341624654590924247676284416700112688556870370072706;
	weights[74] 	= 3.28682810399580329543494522641803782407705900761447635051095456214791737265119053949221137767497672018104e-39;

	nodes[75] 	= 9.3512165084081829598661611222093339595888793209661012904929704408221654894462341624654590924247676284416700112688556870370072706;
	weights[75] 	= 3.28682810399580329543494522641803782407705900761447635051095456214791737265119053949221137767497672018104e-39;

	nodes[76] 	= -9.6676440779928678032041313428259033584894315701132345230804545593092017889710864160010819174642978213619313642588356654686571074;
	weights[76] 	= 8.2491698349505382737026108831019533078838870530265217800722392002935589647128170774336333445504959908556e-42;

	nodes[77] 	= 9.6676440779928678032041313428259033584894315701132345230804545593092017889710864160010819174642978213619313642588356654686571074;
	weights[77] 	= 8.2491698349505382737026108831019533078838870530265217800722392002935589647128170774336333445504959908556e-42;

	nodes[78] 	= -9.9945550223243260909046393738323226835386070127629612958359793424970827823254092609198815139273600472908362040708525388712682047;
	weights[78] 	= 1.380291946286332142166672591737954366365607171494744181545753628447964060101801117207394685365774940091836e-44;

	nodes[79] 	= 9.9945550223243260909046393738323226835386070127629612958359793424970827823254092609198815139273600472908362040708525388712682047;
	weights[79] 	= 1.380291946286332142166672591737954366365607171494744181545753628447964060101801117207394685365774940091836e-44;

	nodes[80] 	= -10.333933112841928268136862481409731841455306000195978630031239976047848571381378763508281478328566866968452926777812477290293667;
	weights[80] 	= 1.449562336634475680782353752441812700458828858418789669180413645164364353300845290885219478915615535414236e-47;

	nodes[81] 	= 10.333933112841928268136862481409731841455306000195978630031239976047848571381378763508281478328566866968452926777812477290293667;
	weights[81] 	= 1.449562336634475680782353752441812700458828858418789669180413645164364353300845290885219478915615535414236e-47;

	nodes[82] 	= -10.688472749322156606770534265525187099756626111349138971350057334587796671480831968648434640649702534182670747767109728715748024;
	weights[82] 	= 8.80911396944656044465341040535209165648366394937646883272650259187991564073978624261336365731430307186161e-51;

	nodes[83] 	= 10.688472749322156606770534265525187099756626111349138971350057334587796671480831968648434640649702534182670747767109728715748024;
	weights[83] 	= 8.80911396944656044465341040535209165648366394937646883272650259187991564073978624261336365731430307186161e-51;

	nodes[84] 	= -11.062009808653285471807414423279186413684253348552302246643920170349302339688566581426004320089991558525748468717041936973107469;
	weights[84] 	= 2.7631164912568190415596652792346666071982782188689455594299457859201307052655271778197927341899229632029533e-54;

	nodes[85] 	= 11.062009808653285471807414423279186413684253348552302246643920170349302339688566581426004320089991558525748468717041936973107469;
	weights[85] 	= 2.7631164912568190415596652792346666071982782188689455594299457859201307052655271778197927341899229632029533e-54;

	nodes[86] 	= -11.460368274811241442278342818424149002479792904722981096360001337647001093711849140872656254641196116072256903880809801915910006;
	weights[86] 	= 3.76913243692003774101150872140381018276738444420492948681694204288486232123829998998621044607913286793046688e-58;

	nodes[87] 	= 11.460368274811241442278342818424149002479792904722981096360001337647001093711849140872656254641196116072256903880809801915910006;
	weights[87] 	= 3.76913243692003774101150872140381018276738444420492948681694204288486232123829998998621044607913286793046688e-58;

	nodes[88] 	= -11.893261784933094676804817664111778523492330071300238373824534080253118483437404860659877766232129777420753949569283032259415488;
	weights[88] 	= 1.687960399559952894348968417078133644840875912758111929600779981273987503408886328917067024752744091949300906e-62;

	nodes[89] 	= 11.893261784933094676804817664111778523492330071300238373824534080253118483437404860659877766232129777420753949569283032259415488;
	weights[89] 	= 1.687960399559952894348968417078133644840875912758111929600779981273987503408886328917067024752744091949300906e-62;

	nodes[90] 	= -12.379550443198965432422544630580532217811847876741951031764153532200893557911434714072241486831041313392240090521753547059171316;
	weights[90] 	= 1.4538901947050342490860593176186028699798331017724993008643347451780752902012339436590848627979302527923635638e-67;

	nodes[91] 	= 12.379550443198965432422544630580532217811847876741951031764153532200893557911434714072241486831041313392240090521753547059171316;
	weights[91] 	= 1.4538901947050342490860593176186028699798331017724993008643347451780752902012339436590848627979302527923635638e-67;

	nodes[92] 	= -12.968636269474321977181356591123189780701987387391037626049670627130814508033674542955440307303387381042758961806690557022669801;
	weights[92] 	= 6.18731672925986003166433631538017319226038318073452908484810470627941673018716188622177437240563081570466152732e-74;

	nodes[93] 	= 12.968636269474321977181356591123189780701987387391037626049670627130814508033674542955440307303387381042758961806690557022669801;
	weights[93] 	= 6.18731672925986003166433631538017319226038318073452908484810470627941673018716188622177437240563081570466152732e-74;

}
#endif /*(__Gauss_Hermite_Nodes_and_Weights_94_hpp__)*/