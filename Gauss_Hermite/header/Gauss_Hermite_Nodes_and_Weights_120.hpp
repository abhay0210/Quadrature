//
//        Gauss_Hermite_Nodes_and_Weights_120.hpp
//
//
//        Created by Sivaram Ambikasaran on 2014-02-22.09:42:48.
//
//
//        Array of nodes and weights for Gauss Hermite quadrature of order 120.
//
//

#ifndef __Gauss_Hermite_Nodes_and_Weights_120_hpp__
#define __Gauss_Hermite_Nodes_and_Weights_120_hpp__

void Gauss_Hermite_Nodes_and_Weights_120(long double*& nodes, long double*& weights) {
	nodes	= new long double[120];
	weights	= new long double[120];

	nodes[0] 	= -0.10118416715318335855782050939017430127231899714559607283971623516747354081454812081807775161812440918526988287557165205128341658;
	weights[0] 	= 0.2003098462618792956354132863206224000732899912687058570143551165305138733573416353944018146025883202159972037679098989005571415;

	nodes[1] 	= 0.10118416715318335855782050939017430127231899714559607283971623516747354081454812081807775161812440918526988287557165205128341658;
	weights[1] 	= 0.2003098462618792956354132863206224000732899912687058570143551165305138733573416353944018146025883202159972037679098989005571415;

	nodes[2] 	= -0.30356969932406811747583028134623424036934961601643260224781663419566294852134435339646937237716733010899390488782410755016839172;
	weights[2] 	= 0.184586659571319706304518392408109397797876257277125139668579423267669231609781822584247783659564372032341142964339666805904603;

	nodes[3] 	= 0.30356969932406811747583028134623424036934961601643260224781663419566294852134435339646937237716733010899390488782410755016839172;
	weights[3] 	= 0.184586659571319706304518392408109397797876257277125139668579423267669231609781822584247783659564372032341142964339666805904603;

	nodes[4] 	= -0.50600686311669595131417132079241213818896075254060145777209616981405283115962202763898673647151732006886070974083503283612902197;
	weights[4] 	= 0.1567372630267805147916358619997425477212096864922722449358137983276697472663667770711431183132424036151910121394968188167922;

	nodes[5] 	= 0.50600686311669595131417132079241213818896075254060145777209616981405283115962202763898673647151732006886070974083503283612902197;
	weights[5] 	= 0.1567372630267805147916358619997425477212096864922722449358137983276697472663667770711431183132424036151910121394968188167922;

	nodes[6] 	= -0.7085302066184782009254264701871482585883181537171555351665103073460230769735290654548290986672295955211500911436333745723449724;
	weights[6] 	= 0.122622424057631739225355653181362019054251422163924158688429550712485247602334206520601196656320462856759354103243123975139;

	nodes[7] 	= 0.7085302066184782009254264701871482585883181537171555351665103073460230769735290654548290986672295955211500911436333745723449724;
	weights[7] 	= 0.122622424057631739225355653181362019054251422163924158688429550712485247602334206520601196656320462856759354103243123975139;

	nodes[8] 	= -0.91117446928904503455051656233432625359288965246948466421535666361447719275954058271332371761904387415037359458204226631500377508;
	weights[8] 	= 0.08837321043732135039351164647759440695290739538028635349611418724588672262934716453592525102887004430115523272290696310722;

	nodes[9] 	= 0.91117446928904503455051656233432625359288965246948466421535666361447719275954058271332371761904387415037359458204226631500377508;
	weights[9] 	= 0.08837321043732135039351164647759440695290739538028635349611418724588672262934716453592525102887004430115523272290696310722;

	nodes[10] 	= -1.1139746602463279929529319430002221127374144931945480176650730816484440315266090660708394774809400405101265261466734850845216362;
	weights[10] 	= 0.0586579997500434709281513304722396200644936403953388961689430072131635074329849052899146053745863353963686385660013791532;

	nodes[11] 	= 1.1139746602463279929529319430002221127374144931945480176650730816484440315266090660708394774809400405101265261466734850845216362;
	weights[11] 	= 0.0586579997500434709281513304722396200644936403953388961689430072131635074329849052899146053745863353963686385660013791532;

	nodes[12] 	= -1.3169661383169376427022217361187931208635317057152721781079240447638717196968932244096553756998667344560919413806745021646188808;
	weights[12] 	= 0.035848215647758156607352733336061510923846516939989724412455262552165048622305707048583804205923136535427192904128626655;

	nodes[13] 	= 1.3169661383169376427022217361187931208635317057152721781079240447638717196968932244096553756998667344560919413806745021646188808;
	weights[13] 	= 0.035848215647758156607352733336061510923846516939989724412455262552165048622305707048583804205923136535427192904128626655;

	nodes[14] 	= -1.5201846943942980906694684949324348587399892352815804319314405427095323393892501388100223466236983099164499402521928762779350529;
	weights[14] 	= 0.02016479698074177832778567226336572435439034848214433453460525834895481120743990475440765342691948199975771103396116753;

	nodes[15] 	= 1.5201846943942980906694684949324348587399892352815804319314405427095323393892501388100223466236983099164499402521928762779350529;
	weights[15] 	= 0.02016479698074177832778567226336572435439034848214433453460525834895481120743990475440765342691948199975771103396116753;

	nodes[16] 	= -1.7236666366787171097097476473552793357758924310678918930507152873592540108787766504953315602074493969646129085276476854685378402;
	weights[16] 	= 0.0104359621359026699058209336076806204066862585658764286518584537067129080341893078528568132491516686219686838757051198;

	nodes[17] 	= 1.7236666366787171097097476473552793357758924310678918930507152873592540108787766504953315602074493969646129085276476854685378402;
	weights[17] 	= 0.0104359621359026699058209336076806204066862585658764286518584537067129080341893078528568132491516686219686838757051198;

	nodes[18] 	= -1.9274488794124775327429709435923039424291662571410279950626692079329923994760724296696641655964916428083418727106814216684844415;
	weights[18] 	= 0.004966873252591946391727107374687693636455539662680115955463661901165571225648154133544620606237968339750186458144582;

	nodes[19] 	= 1.9274488794124775327429709435923039424291662571410279950626692079329923994760724296696641655964916428083418727106814216684844415;
	weights[19] 	= 0.004966873252591946391727107374687693636455539662680115955463661901165571225648154133544620606237968339750186458144582;

	nodes[20] 	= -2.1315690357710211946276252206309013694069937001884103107688514720805160772717075736808425173682613047695664415884147733586638976;
	weights[20] 	= 0.00217278983129545879559641894703342101070918729068916377255883710862650841993905668363897012271828715265210293100973;

	nodes[21] 	= 2.1315690357710211946276252206309013694069937001884103107688514720805160772717075736808425173682613047695664415884147733586638976;
	weights[21] 	= 0.00217278983129545879559641894703342101070918729068916377255883710862650841993905668363897012271828715265210293100973;

	nodes[22] 	= -2.3360655156294799944162115008468492564040669977448581136531357564099493583607389652583297435222196491964789489345872092469278666;
	weights[22] 	= 0.00087313245576434170378260610557845644323024523937570994172321950601760974368622705773897611998380208713962900558084;

	nodes[23] 	= 2.3360655156294799944162115008468492564040669977448581136531357564099493583607389652583297435222196491964789489345872092469278666;
	weights[23] 	= 0.00087313245576434170378260610557845644323024523937570994172321950601760974368622705773897611998380208713962900558084;

	nodes[24] 	= -2.5409776289935786018673290169414228796619448990670392562921875161768148433227702751607006457426247823302889220866446062571167797;
	weights[24] 	= 0.0003220954349043497536852251736654394523909613307873476836678583118999281504646809246192692651591493744019170768943;

	nodes[25] 	= 2.5409776289935786018673290169414228796619448990670392562921875161768148433227702751607006457426247823302889220866446062571167797;
	weights[25] 	= 0.0003220954349043497536852251736654394523909613307873476836678583118999281504646809246192692651591493744019170768943;

	nodes[26] 	= -2.7463456959669998142944207193591199200452762255029510446838945342376013965474789282505072403847392149122949698252500952107925787;
	weights[26] 	= 0.000108997026096752887183317634897872915125616148621549093831724889589760946487491353718824809617205822048219765038;

	nodes[27] 	= 2.7463456959669998142944207193591199200452762255029510446838945342376013965474789282505072403847392149122949698252500952107925787;
	weights[27] 	= 0.000108997026096752887183317634897872915125616148621549093831724889589760946487491353718824809617205822048219765038;

	nodes[28] 	= -2.9522111642257618334257261680110366382218294119477787663091715353701539485107897142574019617322581620794339719557466686242909371;
	weights[28] 	= 0.000033808196410240290173665715139373159257368316783669391437474641900665032177344696450421028965552089308983475783;

	nodes[29] 	= 2.9522111642257618334257261680110366382218294119477787663091715353701539485107897142574019617322581620794339719557466686242909371;
	weights[29] 	= 0.000033808196410240290173665715139373159257368316783669391437474641900665032177344696450421028965552089308983475783;

	nodes[30] 	= -3.1586167350865690214301588268252589747654205534168649683191108206993672652241313969944290762150798404422460420524595302575374705;
	weights[30] 	= 9.603394551645533623717645458156821088986953929127003756762186511835685906351645635575938680654003588646479619e-6;

	nodes[31] 	= 3.1586167350865690214301588268252589747654205534168649683191108206993672652241313969944290762150798404422460420524595302575374705;
	weights[31] 	= 9.603394551645533623717645458156821088986953929127003756762186511835685906351645635575938680654003588646479619e-6;

	nodes[32] 	= -3.3656064993935965596468804014856435224993227142843974332468034071844134426475240538126877172533593672504055344136989440347016875;
	weights[32] 	= 2.495777742758658134496748187889132658864245630152795866746035020898833629859056336458166895665984452849124636e-6;

	nodes[33] 	= 3.3656064993935965596468804014856435224993227142843974332468034071844134426475240538126877172533593672504055344136989440347016875;
	weights[33] 	= 2.495777742758658134496748187889132658864245630152795866746035020898833629859056336458166895665984452849124636e-6;

	nodes[34] 	= -3.573226084610588732279411349738411052329137408377221362249677564171891022767969306721186034267865292296565684219474555353421374;
	weights[34] 	= 5.9280419576037247186058425155082046460406065610554881457915304860130741779412489341749784706144413784171504e-7;

	nodes[35] 	= 3.573226084610588732279411349738411052329137408377221362249677564171891022767969306721186034267865292296565684219474555353421374;
	weights[35] 	= 5.9280419576037247186058425155082046460406065610554881457915304860130741779412489341749784706144413784171504e-7;

	nodes[36] 	= -3.7815228146971920712871922993640300838857689112836464327136423394309814135433679251926154232019811676271938554063731159771863744;
	weights[36] 	= 1.2854272339650576618443336073739676806475584382854425823284106938059686952025090664520234591428422001653866e-7;

	nodes[37] 	= 3.7815228146971920712871922993640300838857689112836464327136423394309814135433679251926154232019811676271938554063731159771863744;
	weights[37] 	= 1.2854272339650576618443336073739676806475584382854425823284106938059686952025090664520234591428422001653866e-7;

	nodes[38] 	= -3.9905458845758907187972315798565613265653388407820400464999549671470229137622759258264454069599429674539502237419716192046168404;
	weights[38] 	= 2.541438649266513093911846534553644462049324862655842806039402027909415645788340900381199422762271879545468e-8;

	nodes[39] 	= 3.9905458845758907187972315798565613265653388407820400464999549671470229137622759258264454069599429674539502237419716192046168404;
	weights[39] 	= 2.541438649266513093911846534553644462049324862655842806039402027909415645788340900381199422762271879545468e-8;

	nodes[40] 	= -4.2003465512658977937003197113917660459261745472983769939469440523438063211370863519476224456161967602238302518032555737410798682;
	weights[40] 	= 4.57539337562543127939447464464467553271233907858589844161103213073741303645696831484683766122846991490769e-9;

	nodes[41] 	= 4.2003465512658977937003197113917660459261745472983769939469440523438063211370863519476224456161967602238302518032555737410798682;
	weights[41] 	= 4.57539337562543127939447464464467553271233907858589844161103213073741303645696831484683766122846991490769e-9;

	nodes[42] 	= -4.4109783440817236812677919542063212239153894288670037778478069239308049544387747619529829396509161526684812799968862823125598109;
	weights[42] 	= 7.4897520452156636148237944673546153051053795710304457395755467580631104660214985861654014565304827363843e-10;

	nodes[43] 	= 4.4109783440817236812677919542063212239153894288670037778478069239308049544387747619529829396509161526684812799968862823125598109;
	weights[43] 	= 7.4897520452156636148237944673546153051053795710304457395755467580631104660214985861654014565304827363843e-10;

	nodes[44] 	= -4.6224972966778902506707493852180520682275359074738941919581919090385850450450886973164750896119388404405851356794702996943551816;
	weights[44] 	= 1.11306250006968281799349396846858268649710259363855805393273532770943529134665124170847815601189934249755e-10;

	nodes[45] 	= 4.6224972966778902506707493852180520682275359074738941919581919090385850450450886973164750896119388404405851356794702996943551816;
	weights[45] 	= 1.11306250006968281799349396846858268649710259363855805393273532770943529134665124170847815601189934249755e-10;

	nodes[46] 	= -4.8349622041811421998289547510311148605059051609029929858602810105852043791324537440477357729081650327463557412515739845640481132;
	weights[46] 	= 1.4991784686824922547375077106587062152702332260125651552480918552205832451022242066947986900078699857567e-11;

	nodes[47] 	= 4.8349622041811421998289547510311148605059051609029929858602810105852043791324537440477357729081650327463557412515739845640481132;
	weights[47] 	= 1.4991784686824922547375077106587062152702332260125651552480918552205832451022242066947986900078699857567e-11;

	nodes[48] 	= -5.0484349092048065190290622728054111617804402059390764421941171843289295370824308343140274946412990358180802001563128260557064187;
	weights[48] 	= 1.826748612701882587355657375426017601348145792654470710776406196537945831862518498275530256550502726702e-12;

	nodes[49] 	= 5.0484349092048065190290622728054111617804402059390764421941171843289295370824308343140274946412990358180802001563128260557064187;
	weights[49] 	= 1.826748612701882587355657375426017601348145792654470710776406196537945831862518498275530256550502726702e-12;

	nodes[50] 	= -5.2629806212085080927094089049665493948051517009988452750677637946660619761826523137724032807346723806768953057845885747455752488;
	weights[50] 	= 2.00975245711076586281803483935178253793092089346212599317153374199127414428895601917792646948289960638e-13;

	nodes[51] 	= 5.2629806212085080927094089049665493948051517009988452750677637946660619761826523137724032807346723806768953057845885747455752488;
	weights[51] 	= 2.00975245711076586281803483935178253793092089346212599317153374199127414428895601917792646948289960638e-13;

	nodes[52] 	= -5.4786682744780224306228047477730163346898717875015837726630053185191062106460685869604621785539907919970420668272167316088960314;
	weights[52] 	= 1.99215287970008572127576214968391177808567606100529875703502388170060504512316230885177029000590928727e-14;

	nodes[53] 	= 5.4786682744780224306228047477730163346898717875015837726630053185191062106460685869604621785539907919970420668272167316088960314;
	weights[53] 	= 1.99215287970008572127576214968391177808567606100529875703502388170060504512316230885177029000590928727e-14;

	nodes[54] 	= -5.6955709309901372595073550403439608436142719897347041536282566921879798295788084494151705520502945846891352876535635535028607388;
	weights[54] 	= 1.7750978597330660346236694033693728303969304413876615811555457666098314768760787691634345563405435464e-15;

	nodes[55] 	= 5.6955709309901372595073550403439608436142719897347041536282566921879798295788084494151705520502945846891352876535635535028607388;
	weights[55] 	= 1.7750978597330660346236694033693728303969304413876615811555457666098314768760787691634345563405435464e-15;

	nodes[56] 	= -5.913766235641708211079323239983420185290357606942717713812972683420140605725504105140331059904668355370631518578930959177025726;
	weights[56] 	= 1.4182835695860073341341731534236093170592004703210530549467986549624122146036920715808076894111398033e-16;

	nodes[57] 	= 5.913766235641708211079323239983420185290357606942717713812972683420140605725504105140331059904668355370631518578930959177025726;
	weights[57] 	= 1.4182835695860073341341731534236093170592004703210530549467986549624122146036920715808076894111398033e-16;

	nodes[58] 	= -6.1333369328198832167145932345937057405963460925057603258852645365276560803277761688883978574167119790009102949790610022027163317;
	weights[58] 	= 1.0133911369582988888450708258806473026110386844744928737974570171053013888910086867047455425909202231e-17;

	nodes[59] 	= 6.1333369328198832167145932345937057405963460925057603258852645365276560803277761688883978574167119790009102949790610022027163317;
	weights[59] 	= 1.0133911369582988888450708258806473026110386844744928737974570171053013888910086867047455425909202231e-17;

	nodes[60] 	= -6.3543714551491241017761732109483053322841404018675016102403980665501133028064769058509887389901341323969550385624302353871741098;
	weights[60] 	= 6.456514031587908700642475401627668944270632482075899667603151278551777656048997467001890699955887657e-19;

	nodes[61] 	= 6.3543714551491241017761732109483053322841404018675016102403980665501133028064769058509887389901341323969550385624302353871741098;
	weights[61] 	= 6.456514031587908700642475401627668944270632482075899667603151278551777656048997467001890699955887657e-19;

	nodes[62] 	= -6.5769645975720454941866717428934553233000170537885385328646211006208793876803765699247990086173700028334748381681035839194924118;
	weights[62] 	= 3.65637814254989195525750520816930433314391397176134929407950940837310038927737702648244407686943798e-20;

	nodes[63] 	= 6.5769645975720454941866717428934553233000170537885385328646211006208793876803765699247990086173700028334748381681035839194924118;
	weights[63] 	= 3.65637814254989195525750520816930433314391397176134929407950940837310038927737702648244407686943798e-20;

	nodes[64] 	= -6.8012182928404509150443409296136063102866595458861646537495709812135982159099101722081779167935170327983960872771361369927451446;
	weights[64] 	= 1.83417464176966794811026816752615894182836688344440661011461178738447689208222146042395646566540608e-21;

	nodes[65] 	= 6.8012182928404509150443409296136063102866595458861646537495709812135982159099101722081779167935170327983960872771361369927451446;
	weights[65] 	= 1.83417464176966794811026816752615894182836688344440661011461178738447689208222146042395646566540608e-21;

	nodes[66] 	= -7.0272425081913884656127886389575914707008750241114870823895804161200645502006418544449175697548542885972050542664549991018467398;
	weights[66] 	= 8.119649736050619803711621033808065952236158651208080965357912854061893637730121373591782432642516e-23;

	nodes[67] 	= 7.0272425081913884656127886389575914707008750241114870823895804161200645502006418544449175697548542885972050542664549991018467398;
	weights[67] 	= 8.119649736050619803711621033808065952236158651208080965357912854061893637730121373591782432642516e-23;

	nodes[68] 	= -7.2551562877054541652194993972494903430660779720919123027813315163787995441680942685954765154106992099603052390823493139281407403;
	weights[68] 	= 3.15908583695722900180675962330007500570804462157763007017273141983497076581558612954473368525960578e-24;

	nodes[69] 	= 7.2551562877054541652194993972494903430660779720919123027813315163787995441680942685954765154106992099603052390823493139281407403;
	weights[69] 	= 3.15908583695722900180675962330007500570804462157763007017273141983497076581558612954473368525960578e-24;

	nodes[70] 	= -7.4850889709254091514674505270166239719006547273732756911501100141335410925826078855716333861011328408510197005067193181591495892;
	weights[70] 	= 1.07538779879997876037646934829947984710842449235752800056337971734359023152916328019697135832537335e-25;

	nodes[71] 	= 7.4850889709254091514674505270166239719006547273732756911501100141335410925826078855716333861011328408510197005067193181591495892;
	weights[71] 	= 1.07538779879997876037646934829947984710842449235752800056337971734359023152916328019697135832537335e-25;

	nodes[72] 	= -7.7171816262142669831797814454041186487931121908169655207391501700396620350519513696633045926057378858365006093471226260679847923;
	weights[72] 	= 3.1872062136052699375115802612331907519752951430103104235814580172297686271449136582960028144441073e-27;

	nodes[73] 	= 7.7171816262142669831797814454041186487931121908169655207391501700396620350519513696633045926057378858365006093471226260679847923;
	weights[73] 	= 3.1872062136052699375115802612331907519752951430103104235814580172297686271449136582960028144441073e-27;

	nodes[74] 	= -7.9515887476984769693781128751613519610304572065435183339743240284933132992665805683098700902052308926772659675272242220941740869;
	weights[74] 	= 8.1797979499698380960011167594143372520257181079173418801409416477375455739471647461931047300953341e-29;

	nodes[75] 	= 7.9515887476984769693781128751613519610304572065435183339743240284933132992665805683098700902052308926772659675272242220941740869;
	weights[75] 	= 8.1797979499698380960011167594143372520257181079173418801409416477375455739471647461931047300953341e-29;

	nodes[76] 	= -8.1884802783862386511297713661721760097665486382771693914036591671901373834866686784132753824681481290988836721255415425842947843;
	weights[76] 	= 1.8070157219004057384732388867267713845976315428466720196223267192768576475965985304552062432219472e-30;

	nodes[77] 	= 8.1884802783862386511297713661721760097665486382771693914036591671901373834866686784132753824681481290988836721255415425842947843;
	weights[77] 	= 1.8070157219004057384732388867267713845976315428466720196223267192768576475965985304552062432219472e-30;

	nodes[78] 	= -8.4280440404817563755201420431764694916069063566938100009719441692932784546555297857368300715967266956013371436546180297910686078;
	weights[78] 	= 3.4133817510443914320660506795078808438994982567565194757017707170995231611987877769630639243858172e-32;

	nodes[79] 	= 8.4280440404817563755201420431764694916069063566938100009719441692932784546555297857368300715967266956013371436546180297910686078;
	weights[79] 	= 3.4133817510443914320660506795078808438994982567565194757017707170995231611987877769630639243858172e-32;

	nodes[80] 	= -8.6704886789370512333257941917384214123107697803846578744722830052733575875398972422894595011385091016217656737442966023602483761;
	weights[80] 	= 5.472690593153284733699769778277368097754747131578031019295492588296890528987991053624316242461522e-34;

	nodes[81] 	= 8.6704886789370512333257941917384214123107697803846578744722830052733575875398972422894595011385091016217656737442966023602483761;
	weights[81] 	= 5.472690593153284733699769778277368097754747131578031019295492588296890528987991053624316242461522e-34;

	nodes[82] 	= -8.916047258707868505950723860069012892371650589008100070852696042314827246814184746428290463434290666809226118953106208433066227;
	weights[82] 	= 7.386159238636945351529036642745707492098264902680683240770317134812234820270021456850199897160553e-36;

	nodes[83] 	= 8.916047258707868505950723860069012892371650589008100070852696042314827246814184746428290463434290666809226118953106208433066227;
	weights[83] 	= 7.386159238636945351529036642745707492098264902680683240770317134812234820270021456850199897160553e-36;

	nodes[84] 	= -9.1649817042418152411399046392835324391155916914366327869228137598834624279803674489858859476995134176903880773886202586579658821;
	weights[84] 	= 8.313804090820375381269006038043483243729332398623192682391820583165949094110261918129331994544701e-38;

	nodes[85] 	= 9.1649817042418152411399046392835324391155916914366327869228137598834624279803674489858859476995134176903880773886202586579658821;
	weights[85] 	= 8.313804090820375381269006038043483243729332398623192682391820583165949094110261918129331994544701e-38;

	nodes[86] 	= -9.4175883379130306858251559492674090201297479056168610759221456959717785967662682368465086710529061993557496118377690398546993614;
	weights[86] 	= 7.722833096079404495293378787879562525502719831549023443357837349548345933661234165177796701051949e-40;

	nodes[87] 	= 9.4175883379130306858251559492674090201297479056168610759221456959717785967662682368465086710529061993557496118377690398546993614;
	weights[87] 	= 7.722833096079404495293378787879562525502719831549023443357837349548345933661234165177796701051949e-40;

	nodes[88] 	= -9.6742048725828564967313134407117040730351760163792161354406543176077787657177484398404102565060118597935394627998817831948360829;
	weights[88] 	= 5.849908561595541877476436349776875040609984932530020780423857148414641475816020227773345253797762e-42;

	nodes[89] 	= 9.6742048725828564967313134407117040730351760163792161354406543176077787657177484398404102565060118597935394627998817831948360829;
	weights[89] 	= 5.849908561595541877476436349776875040609984932530020780423857148414641475816020227773345253797762e-42;

	nodes[90] 	= -9.9352193584733491768382820520615253504572782742143979404012547945621891321520239631133136866790565513935626902696734719907573021;
	weights[90] 	= 3.5641227393845951110875536463187480386710410115903717953369913633509479710188332564591412273734315e-44;

	nodes[91] 	= 9.9352193584733491768382820520615253504572782742143979404012547945621891321520239631133136866790565513935626902696734719907573021;
	weights[91] 	= 3.5641227393845951110875536463187480386710410115903717953369913633509479710188332564591412273734315e-44;

	nodes[92] 	= -10.201081802811932833517226261759437246604495200198729795545585637958838777955848307478092756252570501677435928425441880990304452;
	weights[92] 	= 1.7190498209667850142500264397145601673380971189278484681942075829095804644145436000655309782717321e-46;

	nodes[93] 	= 10.201081802811932833517226261759437246604495200198729795545585637958838777955848307478092756252570501677435928425441880990304452;
	weights[93] 	= 1.7190498209667850142500264397145601673380971189278484681942075829095804644145436000655309782717321e-46;

	nodes[94] 	= -10.472319517421078787835866111128311104989506115674929207078933848502197556673253360272287929766549524259131037350765643294615425;
	weights[94] 	= 6.4431660432387012985495179991304013887981026168141466758472407142709579807663360785138608859646789e-49;

	nodes[95] 	= 10.472319517421078787835866111128311104989506115674929207078933848502197556673253360272287929766549524259131037350765643294615425;
	weights[95] 	= 6.4431660432387012985495179991304013887981026168141466758472407142709579807663360785138608859646789e-49;

	nodes[96] 	= -10.749557783474378384034216434458397922504293249453516188495409351755155772108571802561163753319772348534244252998372729178930343;
	weights[96] 	= 1.8359883902918096443901635171829617089940175900890068529252657014842638019326346861411740793082101e-51;

	nodes[97] 	= 10.749557783474378384034216434458397922504293249453516188495409351755155772108571802561163753319772348534244252998372729178930343;
	weights[97] 	= 1.8359883902918096443901635171829617089940175900890068529252657014842638019326346861411740793082101e-51;

	nodes[98] 	= -11.033548296890791337461076014115183281228711115907670959017198991520187878192142310803068336430381481059441627081856963633091497;
	weights[98] 	= 3.87450589152941756524231740413057488318221677366575462834934858193707187222827910560042848872436612e-54;

	nodes[99] 	= 11.033548296890791337461076014115183281228711115907670959017198991520187878192142310803068336430381481059441627081856963633091497;
	weights[99] 	= 3.87450589152941756524231740413057488318221677366575462834934858193707187222827910560042848872436612e-54;

	nodes[100] 	= -11.325209342106416806510057372032370344522184173677920749578462927204119418624124380371836083272884844633337672039191096220453576;
	weights[100] 	= 5.8655575443380127471927906187306635094492266212217854118597636949744459290935752648037966945528369e-57;

	nodes[101] 	= 11.325209342106416806510057372032370344522184173677920749578462927204119418624124380371836083272884844633337672039191096220453576;
	weights[101] 	= 5.8655575443380127471927906187306635094492266212217854118597636949744459290935752648037966945528369e-57;

	nodes[102] 	= -11.625684271126064622436340885170184252870082917790858279747911553891999565509243260065242229668232233084406206864757889853638838;
	weights[102] 	= 6.124068713752420851234179565595380678935993009432477871472480156938940808384090580446184790412909657e-60;

	nodes[103] 	= 11.625684271126064622436340885170184252870082917790858279747911553891999565509243260065242229668232233084406206864757889853638838;
	weights[103] 	= 6.124068713752420851234179565595380678935993009432477871472480156938940808384090580446184790412909657e-60;

	nodes[104] 	= -11.9364297612983138761786650700004001701126614120943576457312575557539628354203576252428692473970300887653237328397005591908737;
	weights[104] 	= 4.195357679601289054668238966834139058423786407555413789360631043006732845793401575266736418099514985e-63;

	nodes[105] 	= 11.9364297612983138761786650700004001701126614120943576457312575557539628354203576252428692473970300887653237328397005591908737;
	weights[105] 	= 4.195357679601289054668238966834139058423786407555413789360631043006732845793401575266736418099514985e-63;

	nodes[106] 	= -12.259355010417194211025832951047782753396980727524654742813549261706276854705336469132645489597728223233966962211816794960291598;
	weights[106] 	= 1.76752645085445551150930580114190423304045372455329405272935104149801237062962062711546038792357972e-66;

	nodes[107] 	= 12.259355010417194211025832951047782753396980727524654742813549261706276854705336469132645489597728223233966962211816794960291598;
	weights[107] 	= 1.76752645085445551150930580114190423304045372455329405272935104149801237062962062711546038792357972e-66;

	nodes[108] 	= -12.597053652892485169378459635372791567034438781859911028460794014581969626081359732185141919467205008510759786307633402111880428;
	weights[108] 	= 4.19729342128069325598980756069403541596610242460382166312566693587811374232663808929353299603201755093e-70;

	nodes[109] 	= 12.597053652892485169378459635372791567034438781859911028460794014581969626081359732185141919467205008510759786307633402111880428;
	weights[109] 	= 4.19729342128069325598980756069403541596610242460382166312566693587811374232663808929353299603201755093e-70;

	nodes[110] 	= -12.953218388266751069426496090721046026933038004316281227982002497059741958641503063537083923763970981326311124967795984460010833;
	weights[110] 	= 4.9686800178710022781422418647135372872494194472569134803369968355888318202131891935636045668638129979e-74;

	nodes[111] 	= 12.953218388266751069426496090721046026933038004316281227982002497059741958641503063537083923763970981326311124967795984460010833;
	weights[111] 	= 4.9686800178710022781422418647135372872494194472569134803369968355888318202131891935636045668638129979e-74;

	nodes[112] 	= -13.333455576348190439423004963978042674005835568740901653487021954811699551045886795216413144363109085088356016476254611094829372;
	weights[112] 	= 2.4388595277598759476862911746105269786606411184164839929863580686205079912044684276190770731177438819058e-78;

	nodes[113] 	= 13.333455576348190439423004963978042674005835568740901653487021954811699551045886795216413144363109085088356016476254611094829372;
	weights[113] 	= 2.4388595277598759476862911746105269786606411184164839929863580686205079912044684276190770731177438819058e-78;

	nodes[114] 	= -13.747114438757134836272410538234589421707281281175152728525856848682804348974190127841838310728895660956586247339305647359860601;
	weights[114] 	= 3.66724288992576032236468436247817134929995556913484252471557992287907690990003171693878574557126844984791e-83;

	nodes[115] 	= 13.747114438757134836272410538234589421707281281175152728525856848682804348974190127841838310728895660956586247339305647359860601;
	weights[115] 	= 3.66724288992576032236468436247817134929995556913484252471557992287907690990003171693878574557126844984791e-83;

	nodes[116] 	= -14.212342685181814702911721367595567975349630606231439386814232852381172964301077333436205533038532355566190467781871341994974715;
	weights[116] 	= 9.488022396944008584048998664082747388940815598442181771984201368743139924223014613604013329852435937241895e-89;

	nodes[117] 	= 14.212342685181814702911721367595567975349630606231439386814232852381172964301077333436205533038532355566190467781871341994974715;
	weights[117] 	= 9.488022396944008584048998664082747388940815598442181771984201368743139924223014613604013329852435937241895e-89;

	nodes[118] 	= -14.776657672798868483851814812419458193954674343395021883441035904060113727975611487246518298377396977741663928510127862579157186;
	weights[118] 	= 9.7087403173560315563096380162790091517468937400104513543217645138962377870919767284559113348856455395988515e-96;

	nodes[119] 	= 14.776657672798868483851814812419458193954674343395021883441035904060113727975611487246518298377396977741663928510127862579157186;
	weights[119] 	= 9.7087403173560315563096380162790091517468937400104513543217645138962377870919767284559113348856455395988515e-96;

}
#endif /*(__Gauss_Hermite_Nodes_and_Weights_120_hpp__)*/