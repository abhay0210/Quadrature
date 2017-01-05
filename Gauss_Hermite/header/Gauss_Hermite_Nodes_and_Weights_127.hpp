//
//        Gauss_Hermite_Nodes_and_Weights_127.hpp
//
//
//        Created by Sivaram Ambikasaran on 2014-02-22.09:42:48.
//
//
//        Array of nodes and weights for Gauss Hermite quadrature of order 127.
//
//

#ifndef __Gauss_Hermite_Nodes_and_Weights_127_hpp__
#define __Gauss_Hermite_Nodes_and_Weights_127_hpp__

void Gauss_Hermite_Nodes_and_Weights_127(long double*& nodes, long double*& weights) {
	nodes	= new long double[127];
	weights	= new long double[127];

	nodes[0] 	= 0;
	weights[0] 	= 0.19673340688884514099532367710216012253931238202992124899385039358773603314197877129314668904811448229928121978845562472857555736;

	nodes[1] 	= -0.19673838392423251964272239737078177321917447605477682789617967734861725344553102534745657591430713167969239907614826849447471572;
	weights[1] 	= 0.189278495801793364889704841035067672518411690546983093882857111772613595222397683154982367547846089524983852694372651278067323;

	nodes[2] 	= 0.19673838392423251964272239737078177321917447605477682789617967734861725344553102534745657591430713167969239907614826849447471572;
	weights[2] 	= 0.189278495801793364889704841035067672518411690546983093882857111772613595222397683154982367547846089524983852694372651278067323;

	nodes[3] 	= -0.39350664185130136568037826200185396889815110527156251462267331672720081427920834623686516930842453711962496185286919195650687817;
	weights[3] 	= 0.16856236074260387098733059283352464534897007517099906260203582671291864426861783139077673850590533053600826717635643474620114;

	nodes[4] 	= 0.39350664185130136568037826200185396889815110527156251462267331672720081427920834623686516930842453711962496185286919195650687817;
	weights[4] 	= 0.16856236074260387098733059283352464534897007517099906260203582671291864426861783139077673850590533053600826717635643474620114;

	nodes[5] 	= -0.59033470680942102142230439346102326587088585473449889262014153913581853894491886223713987083770877147789649235922611051957815486;
	weights[5] 	= 0.138939453090947794093360848265432329800021099707309692331317497724891493537389608162382632748593659615230800779078914766614;

	nodes[6] 	= 0.59033470680942102142230439346102326587088585473449889262014153913581853894491886223713987083770877147789649235922611051957815486;
	weights[6] 	= 0.138939453090947794093360848265432329800021099707309692331317497724891493537389608162382632748593659615230800779078914766614;

	nodes[7] 	= -0.7872526302182503415159683187897068121311589796175250839379108728097271773577897866071509756015887621830981337152323788060010854;
	weights[7] 	= 0.10598520508123912472195529191952310774926869148615138555129080242459546625840017906261127736345860660535718981624500369807;

	nodes[8] 	= 0.7872526302182503415159683187897068121311589796175250839379108728097271773577897866071509756015887621830981337152323788060010854;
	weights[8] 	= 0.10598520508123912472195529191952310774926869148615138555129080242459546625840017906261127736345860660535718981624500369807;

	nodes[9] 	= -0.98429064194027277726568984213772647185525286665081563523141379778196908647853164219263178118603594296726861384584965885378470453;
	weights[9] 	= 0.0748079897688165372160261828060075187118365837809348094640155655316815360649459186974638833144172084208521686323503040405;

	nodes[10] 	= 0.98429064194027277726568984213772647185525286665081563523141379778196908647853164219263178118603594296726861384584965885378470453;
	weights[10] 	= 0.0748079897688165372160261828060075187118365837809348094640155655316815360649459186974638833144172084208521686323503040405;

	nodes[11] 	= -1.1814792113700685848678583598423171209581141637865285068434713607568983610490476962306953943731644740294187946670224811166232421;
	weights[11] 	= 0.048847387114452026253542848431619130085282325670136306466962494245901401829984112652476863767031710898080418683648905975;

	nodes[12] 	= 1.1814792113700685848678583598423171209581141637865285068434713607568983610490476962306953943731644740294187946670224811166232421;
	weights[12] 	= 0.048847387114452026253542848431619130085282325670136306466962494245901401829984112652476863767031710898080418683648905975;

	nodes[13] 	= -1.3788491099261778091441557053728386833574073397181325989142996245908117335299790815766292186430481589131385681149884808874225406;
	weights[13] 	= 0.02949929624830543539483933640977086807267717371418982175271957576649655931776754611549064130061336901385034195703200021;

	nodes[14] 	= 1.3788491099261778091441557053728386833574073397181325989142996245908117335299790815766292186430481589131385681149884808874225406;
	weights[14] 	= 0.02949929624830543539483933640977086807267717371418982175271957576649655931776754611549064130061336901385034195703200021;

	nodes[15] 	= -1.5764314753267801315519597621878785955539424671947305046138080711035621420771158107939712561452686190048448227567253979488499339;
	weights[15] 	= 0.0164711422416609467530350356257604110089627211619248409996392060578014782712380190547576033494499281850971978193158756;

	nodes[16] 	= 1.5764314753267801315519597621878785955539424671947305046138080711035621420771158107939712561452686190048448227567253979488499339;
	weights[16] 	= 0.0164711422416609467530350356257604110089627211619248409996392060578014782712380190547576033494499281850971978193158756;

	nodes[17] 	= -1.7742578780516791584676442103681460296260463962669636440373110978226190937338235441692249746302315129936881453758418492341686451;
	weights[17] 	= 0.008500026304180863499416837291120263155245852569358047714792318948863051967294780990675288147789352987152844012507076;

	nodes[18] 	= 1.7742578780516791584676442103681460296260463962669636440373110978226190937338235441692249746302315129936881453758418492341686451;
	weights[18] 	= 0.008500026304180863499416837291120263155245852569358047714792318948863051967294780990675288147789352987152844012507076;

	nodes[19] 	= -1.9723603904195020079324743227565088675439028094484688175742883083813298808525098778923381704567743308181114613030810553776550541;
	weights[19] 	= 0.00405248551861722466559241860022977148938929943884781365395449784053022518812479696899303691005465564747864434424535;

	nodes[20] 	= 1.9723603904195020079324743227565088675439028094484688175742883083813298808525098778923381704567743308181114613030810553776550541;
	weights[20] 	= 0.00405248551861722466559241860022977148938929943884781365395449784053022518812479696899303691005465564747864434424535;

	nodes[21] 	= -2.1707716587411506879498498083694800022153924068926047721425660668479950226304450558177876511224540005433587567857417089463087478;
	weights[21] 	= 0.00178412083268189555200882114580366098934327395446009292826496334487421468602398550111580720219225368780437744140021;

	nodes[22] 	= 2.1707716587411506879498498083694800022153924068926047721425660668479950226304450558177876511224540005433587567857417089463087478;
	weights[22] 	= 0.00178412083268189555200882114580366098934327395446009292826496334487421468602398550111580720219225368780437744140021;

	nodes[23] 	= -2.3695249790490401080012474645702358270938834783330177392220596104918420487776383645709861706712246549819833210591711568545488041;
	weights[23] 	= 0.0007249392974272396332121858178208177786712930864619540114936661327768367363394182152197903100636073454704543406538;

	nodes[24] 	= 2.3695249790490401080012474645702358270938834783330177392220596104918420487776383645709861706712246549819833210591711568545488041;
	weights[24] 	= 0.0007249392974272396332121858178208177786712930864619540114936661327768367363394182152197903100636073454704543406538;

	nodes[25] 	= -2.568654376947350172314401302236349940720519298892647418828462182434434636279231341262047087493102256269045618002736847088682573;
	weights[25] 	= 0.0002717076262801572867816396618833029937486499135190182084663127302670396954824427856083119019605642617695380242917;

	nodes[26] 	= 2.568654376947350172314401302236349940720519298892647418828462182434434636279231341262047087493102256269045618002736847088682573;
	weights[26] 	= 0.0002717076262801572867816396618833029937486499135190182084663127302670396954824427856083119019605642617695380242917;

	nodes[27] 	= -2.768194692182405880122654595889164510775878786329349047112627299550626443247313423142608405181884499076024314516540987951201779;
	weights[27] 	= 0.00009387443572036468663612597100036018272824439385379991061272048977306850259270444154191504642808231034676970873;

	nodes[28] 	= 2.768194692182405880122654595889164510775878786329349047112627299550626443247313423142608405181884499076024314516540987951201779;
	weights[28] 	= 0.00009387443572036468663612597100036018272824439385379991061272048977306850259270444154191504642808231034676970873;

	nodes[29] 	= -2.968181668595591026776164952150545007310850677533540587381732879527336760393092438287056703714322504661016052406030486703693832;
	weights[29] 	= 0.000029876790536001990179064925198776437126037113844880260561031738944235976213696047589744024946521904301486909564;

	nodes[30] 	= 2.968181668595591026776164952150545007310850677533540587381732879527336760393092438287056703714322504661016052406030486703693832;
	weights[30] 	= 0.000029876790536001990179064925198776437126037113844880260561031738944235976213696047589744024946521904301486909564;

	nodes[31] 	= -3.1686520501953630191857798261495251707175073381235178865162448300380174706227328535121574334140807121576697879586038579132138513;
	weights[31] 	= 8.75244680345528247507614056972142954974754787999760783230755521486198100441008316009770179046974375152797899e-6;

	nodes[32] 	= 3.1686520501953630191857798261495251707175073381235178865162448300380174706227328535121574334140807121576697879586038579132138513;
	weights[32] 	= 8.75244680345528247507614056972142954974754787999760783230755521486198100441008316009770179046974375152797899e-6;

	nodes[33] 	= -3.3696436841717397896643629240034632652842263265071301035331109177840287386282082923054141017450055213459399272037753019181290259;
	weights[33] 	= 2.35815617248490159838145978858676939710765699856615644500684619339114217927572770217366184014254899870341666e-6;

	nodes[34] 	= 3.3696436841717397896643629240034632652842263265071301035331109177840287386282082923054141017450055213459399272037753019181290259;
	weights[34] 	= 2.35815617248490159838145978858676939710765699856615644500684619339114217927572770217366184014254899870341666e-6;

	nodes[35] 	= -3.5711956317782180447199756485249409572511734485918511800937777659272114652174079025185741111858695922679413859206243345540312127;
	weights[35] 	= 5.8380944276294746290102231530071249293612024747924597496846867904309904544279662703717932909111219639083974e-7;

	nodes[36] 	= 3.5711956317782180447199756485249409572511734485918511800937777659272114652174079025185741111858695922679413859206243345540312127;
	weights[36] 	= 5.8380944276294746290102231530071249293612024747924597496846867904309904544279662703717932909111219639083974e-7;

	nodes[37] 	= -3.7733482881250526721004678400057309172181087245775541420082653218624340913002215170035284852190455524896214480313158546931475153;
	weights[37] 	= 1.3267855842580754929848588400392982715349272537154148422157421414970845444144407161526930513184879419972851e-7;

	nodes[38] 	= 3.7733482881250526721004678400057309172181087245775541420082653218624340913002215170035284852190455524896214480313158546931475153;
	weights[38] 	= 1.3267855842580754929848588400392982715349272537154148422157421414970845444144407161526930513184879419972851e-7;

	nodes[39] 	= -3.9761435120673355916035814195920292868958396595456799806509414306331680875652495866965901745023300248594076606819681046938617778;
	weights[39] 	= 2.76504970450371674155194812923479830597271190774907575625988223301503151350133111926230235789619868854096e-8;

	nodes[40] 	= 3.9761435120673355916035814195920292868958396595456799806509414306331680875652495866965901745023300248594076606819681046938617778;
	weights[40] 	= 2.76504970450371674155194812923479830597271190774907575625988223301503151350133111926230235789619868854096e-8;

	nodes[41] 	= -4.1796247675352031349421189892407662665012804092013745648254188564527920377181178226347540571617236676583387541260931904792374262;
	weights[41] 	= 5.2781663937136972933304025511812166460343681754351061660825022243902711861028531428054117783421600663007e-9;

	nodes[42] 	= 4.1796247675352031349421189892407662665012804092013745648254188564527920377181178226347540571617236676583387541260931904792374262;
	weights[42] 	= 5.2781663937136972933304025511812166460343681754351061660825022243902711861028531428054117783421600663007e-9;

	nodes[43] 	= -4.3838372778464736294253744407458982225886234354301067312806639252613617507805964502171509462313297462171734206308071451041405383;
	weights[43] 	= 9.217394096772150867824469898760751783803929989637181276359638166525493321258700833292668828698183334109e-10;

	nodes[44] 	= 4.3838372778464736294253744407458982225886234354301067312806639252613617507805964502171509462313297462171734206308071451041405383;
	weights[44] 	= 9.217394096772150867824469898760751783803929989637181276359638166525493321258700833292668828698183334109e-10;

	nodes[45] 	= -4.5888281947698372951606485031211703142187488530482208901251310745624923741096096398437255458628965614589683414652370876468829169;
	weights[45] 	= 1.4706331273477483002840833322736663987666341715523259414562984964274814787922015154529094169267471731622e-10;

	nodes[46] 	= 4.5888281947698372951606485031211703142187488530482208901251310745624923741096096398437255458628965614589683414652370876468829169;
	weights[46] 	= 1.4706331273477483002840833322736663987666341715523259414562984964274814787922015154529094169267471731622e-10;

	nodes[47] 	= -4.7946467843764925009748509930857273232260876024286725116825132200655569188000953664733779079310296555740654143088144113249462029;
	weights[47] 	= 2.140692029052128849932019566063628760602193467985294831293975196022008726352411594517397311206559974439e-11;

	nodes[48] 	= 4.7946467843764925009748509930857273232260876024286725116825132200655569188000953664733779079310296555740654143088144113249462029;
	weights[48] 	= 2.140692029052128849932019566063628760602193467985294831293975196022008726352411594517397311206559974439e-11;

	nodes[49] 	= -5.0013446320386360038520809107373140957467240033615666683166564594301732443923130419968619509781427894584764584355705354681445581;
	weights[49] 	= 2.83853037250817094975750489262229375321663593498973799444980285100843739314438947783249206473212360883e-12;

	nodes[50] 	= 5.0013446320386360038520809107373140957467240033615666683166564594301732443923130419968619509781427894584764584355705354681445581;
	weights[50] 	= 2.83853037250817094975750489262229375321663593498973799444980285100843739314438947783249206473212360883e-12;

	nodes[51] 	= -5.2089758693153983587570258372239289612552065825558355201373675778643756708216746494077895309641406010339243289354346113897501651;
	weights[51] 	= 3.42300944935037851188976963928381540334011915646060382991104748549972420572482240712738532655468423e-13;

	nodes[52] 	= 5.2089758693153983587570258372239289612552065825558355201373675778643756708216746494077895309641406010339243289354346113897501651;
	weights[52] 	= 3.42300944935037851188976963928381540334011915646060382991104748549972420572482240712738532655468423e-13;

	nodes[53] 	= -5.4175974259243240722848425872923967248129410883325854645828975158301967540837781378213573977115956389106657541451696203951835472;
	weights[53] 	= 3.747395447295635770899860760812042820155703376850533568749120295370132564944668464490527333637265969e-14;

	nodes[54] 	= 5.4175974259243240722848425872923967248129410883325854645828975158301967540837781378213573977115956389106657541451696203951835472;
	weights[54] 	= 3.747395447295635770899860760812042820155703376850533568749120295370132564944668464490527333637265969e-14;

	nodes[55] 	= -5.6272693105464816659423455794908698090709566913682291802234337602248472068428446770847253140823120825293262978575985890190755033;
	weights[55] 	= 3.717330312526632486244099386132769954664604328137198781640147688531044229010999022288563301204690839e-15;

	nodes[56] 	= 5.6272693105464816659423455794908698090709566913682291802234337602248472068428446770847253140823120825293262978575985890190755033;
	weights[56] 	= 3.717330312526632486244099386132769954664604328137198781640147688531044229010999022288563301204690839e-15;

	nodes[57] 	= -5.8380549248774187386601690807756885036271689291718643284869291258696727450867297082545139701368300074140792552015067201812271409;
	weights[57] 	= 3.334441430330262563410612353153921318965523401317244029642922350899494063203126502257620741895139793e-16;

	nodes[58] 	= 5.8380549248774187386601690807756885036271689291718643284869291258696727450867297082545139701368300074140792552015067201812271409;
	weights[58] 	= 3.334441430330262563410612353153921318965523401317244029642922350899494063203126502257620741895139793e-16;

	nodes[59] 	= -6.0500214161419845694465474482388446678311425827356177619606446810031994183083174917327938004540781996655664575415637976929239485;
	weights[59] 	= 2.69865119072980851232572568063131997419649208283227948896766742720558814516847403846854313794980898e-17;

	nodes[60] 	= 6.0500214161419845694465474482388446678311425827356177619606446810031994183083174917327938004540781996655664575415637976929239485;
	weights[60] 	= 2.69865119072980851232572568063131997419649208283227948896766742720558814516847403846854313794980898e-17;

	nodes[61] 	= -6.263240074273735434560972385709153132418742627914763619648101992409223503188484992229386844602712545802461748346643692239653817;
	weights[61] 	= 1.96593268885070384943390296305913041311752097182267505864077700507014535161118725523950043493888358e-18;

	nodes[62] 	= 6.263240074273735434560972385709153132418742627914763619648101992409223503188484992229386844602712545802461748346643692239653817;
	weights[62] 	= 1.96593268885070384943390296305913041311752097182267505864077700507014535161118725523950043493888358e-18;

	nodes[63] 	= -6.4777867811645365448144903821486759248846630190172492511388005540737997923939065796954664635804007688465826938167384152054200044;
	weights[63] 	= 1.28579977867628696999762170541871130560162710244834893294646272158571344804562674317984827851991249e-19;

	nodes[64] 	= 6.4777867811645365448144903821486759248846630190172492511388005540737997923939065796954664635804007688465826938167384152054200044;
	weights[64] 	= 1.28579977867628696999762170541871130560162710244834893294646272158571344804562674317984827851991249e-19;

	nodes[65] 	= -6.6937425208758294190074417381665756986824760497004140937666331966789826678400124029952452581277569331061799013686043901588396579;
	weights[65] 	= 7.5293161638815506744419294731906557594630373451446565148412799051618723012001987045013160466593952e-21;

	nodes[66] 	= 6.6937425208758294190074417381665756986824760497004140937666331966789826678400124029952452581277569331061799013686043901588396579;
	weights[66] 	= 7.5293161638815506744419294731906557594630373451446565148412799051618723012001987045013160466593952e-21;

	nodes[67] 	= -6.9111939615465713197465633109366460817983825233983859079123242586993283958113090200277024154158185131042072109208640404282769655;
	weights[67] 	= 3.9355990860983290683846660226809614111137307633199602066421291840824818386656495899893409192514971e-22;

	nodes[68] 	= 6.9111939615465713197465633109366460817983825233983859079123242586993283958113090200277024154158185131042072109208640404282769655;
	weights[68] 	= 3.9355990860983290683846660226809614111137307633199602066421291840824818386656495899893409192514971e-22;

	nodes[69] 	= -7.1302341220350710668064025713431084953230296819384693393272243029910337023168146358339702428893000360487258319941879402374561956;
	weights[69] 	= 1.8303134636337426441587898257634611855235093615547312703081536220646114476689726503319059690261872e-23;

	nodes[70] 	= 7.1302341220350710668064025713431084953230296819384693393272243029910337023168146358339702428893000360487258319941879402374561956;
	weights[70] 	= 1.8303134636337426441587898257634611855235093615547312703081536220646114476689726503319059690261872e-23;

	nodes[71] 	= -7.3509631392269052701961258043733358174462978117224969133901654511659263689640563992037695339070378692144865629401562656620174188;
	weights[71] 	= 7.546821890332034658723496577234611395819636952392167703525414204247329643274915892202085485135349e-25;

	nodes[72] 	= 7.3509631392269052701961258043733358174462978117224969133901654511659263689640563992037695339070378692144865629401562656620174188;
	weights[72] 	= 7.546821890332034658723496577234611395819636952392167703525414204247329643274915892202085485135349e-25;

	nodes[73] 	= -7.5734891556083454022834960763301135620783834667830249710072787784977067557603607492384319935158030618221251427004323054057533251;
	weights[73] 	= 2.748248921212608804675319879387459371365903611992655235287588804210018557307882795513551259720632e-26;

	nodes[74] 	= 7.5734891556083454022834960763301135620783834667830249710072787784977067557603607492384319935158030618221251427004323054057533251;
	weights[74] 	= 2.748248921212608804675319879387459371365903611992655235287588804210018557307882795513551259720632e-26;

	nodes[75] 	= -7.7979293513870105420829120455591170894568692374356836603583805567962410494017717934808039948921196764536061024529681843700875406;
	weights[75] 	= 8.80195676919724033923142529140272634958165574329309445492957036350869664431912266139814738507954e-28;

	nodes[76] 	= 7.7979293513870105420829120455591170894568692374356836603583805567962410494017717934808039948921196764536061024529681843700875406;
	weights[76] 	= 8.80195676919724033923142529140272634958165574329309445492957036350869664431912266139814738507954e-28;

	nodes[77] 	= -8.0244111514703375578594739796798050612478577623679562197711378476986508423197511318913715266442031366640651707272829585336798719;
	weights[77] 	= 2.46797732418540047621484693479767479674352516663920838099517922515437637084715383402007798057425e-29;

	nodes[78] 	= 8.0244111514703375578594739796798050612478577623679562197711378476986508423197511318913715266442031366640651707272829585336798719;
	weights[78] 	= 2.46797732418540047621484693479767479674352516663920838099517922515437637084715383402007798057425e-29;

	nodes[79] 	= -8.2530736454457156579694124243887892739216295613987608330430638821376970870406771569228830853261945716570080592025874569743169885;
	weights[79] 	= 6.02777538509463291699314327192521299747789433707908934901098744785032186279246156922443287346207e-31;

	nodes[80] 	= 8.2530736454457156579694124243887892739216295613987608330430638821376970870406771569228830853261945716570080592025874569743169885;
	weights[80] 	= 6.02777538509463291699314327192521299747789433707908934901098744785032186279246156922443287346207e-31;

	nodes[81] 	= -8.484069268983247332609718033998376114126690041051873260936440259327320383348349824868699564890177638869586681809404934240775787;
	weights[81] 	= 1.27533314110484056196532640641906348323700196914204343742813310488197883867849413784430374894549e-32;

	nodes[82] 	= 8.484069268983247332609718033998376114126690041051873260936440259327320383348349824868699564890177638869586681809404934240775787;
	weights[82] 	= 1.27533314110484056196532640641906348323700196914204343742813310488197883867849413784430374894549e-32;

	nodes[83] 	= -8.7175658087076307363833999548548476723937837048161157422383105287307306765301661308315483023347509510580990591843289144617825819;
	weights[83] 	= 2.3232083386415854084664074622974054727536496600621750371052982453470553629325916889853610487444e-34;

	nodes[84] 	= 8.7175658087076307363833999548548476723937837048161157422383105287307306765301661308315483023347509510580990591843289144617825819;
	weights[84] 	= 2.3232083386415854084664074622974054727536496600621750371052982453470553629325916889853610487444e-34;

	nodes[85] 	= -8.9537488108565404323807890169970202814312279182728047342475110611562286450123281469558804210372779380017505869208976114398432276;
	weights[85] 	= 3.61918834460649868835433546523349095647212436664899429254203756608026085975742483830687528232634e-36;

	nodes[86] 	= 8.9537488108565404323807890169970202814312279182728047342475110611562286450123281469558804210372779380017505869208976114398432276;
	weights[86] 	= 3.61918834460649868835433546523349095647212436664899429254203756608026085975742483830687528232634e-36;

	nodes[87] 	= -9.1928244988460305715774195052526610177297537788673476714111541144076729226113458877067703010806127074059363620797175696973400979;
	weights[87] 	= 4.78543906802804099967221020647044468068837385814416415243622207707126368190933044837372679443812e-38;

	nodes[88] 	= 9.1928244988460305715774195052526610177297537788673476714111541144076729226113458877067703010806127074059363620797175696973400979;
	weights[88] 	= 4.78543906802804099967221020647044468068837385814416415243622207707126368190933044837372679443812e-38;

	nodes[89] 	= -9.4350233389881650135019598506287340054882004865332440111880257421243897995111597639788247460039207427072448460216356116429633374;
	weights[89] 	= 5.32553037755907921458489847862568655629249998622159287897764986900862553329479802211175469516814e-40;

	nodes[90] 	= 9.4350233389881650135019598506287340054882004865332440111880257421243897995111597639788247460039207427072448460216356116429633374;
	weights[90] 	= 5.32553037755907921458489847862568655629249998622159287897764986900862553329479802211175469516814e-40;

	nodes[91] 	= -9.680604441247472803815071273273717001734555368073214659785361607481300586742537792670235612521643153404103927926609488438634953;
	weights[91] 	= 4.94110311159254074774568933309662943452210955778409232194167525672782244996457989031822608033278e-42;

	nodes[92] 	= 9.680604441247472803815071273273717001734555368073214659785361607481300586742537792670235612521643153404103927926609488438634953;
	weights[92] 	= 4.94110311159254074774568933309662943452210955778409232194167525672782244996457989031822608033278e-42;

	nodes[93] 	= -9.9298610495114250736847004273684437462029471957323174750908702495045974671791624192188299678096026756421352178292068622452083389;
	weights[93] 	= 3.78144279409152203964384313148950027337163504530789736466528921550638305038162211978475796807877e-44;

	nodes[94] 	= 9.9298610495114250736847004273684437462029471957323174750908702495045974671791624192188299678096026756421352178292068622452083389;
	weights[94] 	= 3.78144279409152203964384313148950027337163504530789736466528921550638305038162211978475796807877e-44;

	nodes[95] 	= -10.183127473450343888624126450356630584095827836083947704403457836826779075611221439736780671494765133048849955800311104081287104;
	weights[95] 	= 2.35816591560823143778744566357212019166033166438061694160777800058438530596581900232384274172604e-46;

	nodes[96] 	= 10.183127473450343888624126450356630584095827836083947704403457836826779075611221439736780671494765133048849955800311104081287104;
	weights[96] 	= 2.35816591560823143778744566357212019166033166438061694160777800058438530596581900232384274172604e-46;

	nodes[97] 	= -10.440787957772772867742591798027450064034286877088585779541393100659528163276352759972688815646575387974643301292406601175957342;
	weights[97] 	= 1.181705444072103927163676652680823417703598992545498455151404916363915586685476562931045817657883e-48;

	nodes[98] 	= 10.440787957772772867742591798027450064034286877088585779541393100659528163276352759972688815646575387974643301292406601175957342;
	weights[98] 	= 1.181705444072103927163676652680823417703598992545498455151404916363915586685476562931045817657883e-48;

	nodes[99] 	= -10.703288201027481347670940744690064442709070354080020738438559251720483678364142167827502683947411966113908856182140248191838586;
	weights[99] 	= 4.68218083833618292793410025835965883821598774269548803500740405958384224628601549161757376964062e-51;

	nodes[100] 	= 10.703288201027481347670940744690064442709070354080020738438559251720483678364142167827502683947411966113908856182140248191838586;
	weights[100] 	= 4.68218083833618292793410025835965883821598774269548803500740405958384224628601549161757376964062e-51;

	nodes[101] 	= -10.97115056984024742342304026388135128352094134186545829252508938770860243925025470467528759961148150092759268320898293023210399;
	weights[101] 	= 1.439464194929872033614106861896995175128093883639042459297872819150565870568886460120294297382846e-53;

	nodes[102] 	= 10.97115056984024742342304026388135128352094134186545829252508938770860243925025470467528759961148150092759268320898293023210399;
	weights[102] 	= 1.439464194929872033614106861896995175128093883639042459297872819150565870568886460120294297382846e-53;

	nodes[103] 	= -11.244994583785543445194384194299929193921537172308216248075853947451926831117254536514740261862028219307567739694031466307895741;
	weights[103] 	= 3.358116622396273638692993577304346424322215411942137730276832055978504195924679786841291870924846e-56;

	nodes[104] 	= 11.244994583785543445194384194299929193921537172308216248075853947451926831117254536514740261862028219307567739694031466307895741;
	weights[104] 	= 3.358116622396273638692993577304346424322215411942137730276832055978504195924679786841291870924846e-56;

	nodes[105] 	= -11.525565112572696599167888588563834426330691892787616715110248288825972054755717052472181195121026616833918155165594570122816082;
	weights[105] 	= 5.788456337506569597883400190845124873306025602468191675814855904382166338806150602830067838896051e-59;

	nodes[106] 	= 11.525565112572696599167888588563834426330691892787616715110248288825972054755717052472181195121026616833918155165594570122816082;
	weights[106] 	= 5.788456337506569597883400190845124873306025602468191675814855904382166338806150602830067838896051e-59;

	nodes[107] 	= -11.813772198267727195134584136190526925821915455353076547955309486916514849031891104402531373914581782377144114425505211147276304;
	weights[107] 	= 7.1375092946574300296512212312290748849913445565193695407148699288623523746822094485234065368842261e-62;

	nodes[108] 	= 11.813772198267727195134584136190526925821915455353076547955309486916514849031891104402531373914581782377144114425505211147276304;
	weights[108] 	= 7.1375092946574300296512212312290748849913445565193695407148699288623523746822094485234065368842261e-62;

	nodes[109] 	= -12.110749020947747600132123508132183557350715520255275872967842412639804206170198627511969470886531382468353176917244314102917345;
	weights[109] 	= 6.0486548964204917901621475384307462304347007914407474955852948535984750267175259044038231053485531e-65;

	nodes[110] 	= 12.110749020947747600132123508132183557350715520255275872967842412639804206170198627511969470886531382468353176917244314102917345;
	weights[110] 	= 6.0486548964204917901621475384307462304347007914407474955852948535984750267175259044038231053485531e-65;

	nodes[111] 	= -12.417939378869715805445879624068662152685899146140838119998459604926201413450112898860206395701253940984008192248174572694684595;
	weights[111] 	= 3.3489139011899271644416980911445925962623150497505821915055804996912617573566399797769829551219333e-68;

	nodes[112] 	= 12.417939378869715805445879624068662152685899146140838119998459604926201413450112898860206395701253940984008192248174572694684595;
	weights[112] 	= 3.3489139011899271644416980911445925962623150497505821915055804996912617573566399797769829551219333e-68;

	nodes[113] 	= -12.737235652415686338138003924071824736105265353182330531893829551912939647736509604641391773984495329584339480827726614265810063;
	weights[113] 	= 1.134192420862989138753766203428526274450567776673050343223678044294143758337467261066949898301335376e-71;

	nodes[114] 	= 12.737235652415686338138003924071824736105265353182330531893829551912939647736509604641391773984495329584339480827726614265810063;
	weights[114] 	= 1.134192420862989138753766203428526274450567776673050343223678044294143758337467261066949898301335376e-71;

	nodes[115] 	= -13.071208660474601901583995439648851016902638626375250374764080973277831770103584679755839098584438938634415535680870773278106021;
	weights[115] 	= 2.1503714733677160220355187827255016536703575664087223457774532978224089902293113991172847137456587969e-75;

	nodes[116] 	= 13.071208660474601901583995439648851016902638626375250374764080973277831770103584679755839098584438938634415535680870773278106021;
	weights[116] 	= 2.1503714733677160220355187827255016536703575664087223457774532978224089902293113991172847137456587969e-75;

	nodes[117] 	= -13.423518590070950062438258321854749516028054110354388064917948329414563602468721044578998183510087024390280154391906882648001797;
	weights[117] 	= 2.01439576527109443920782513993773443524876978629559053936897031055091890891432402230656366652954128583e-79;

	nodes[118] 	= 13.423518590070950062438258321854749516028054110354388064917948329414563602468721044578998183510087024390280154391906882648001797;
	weights[118] 	= 2.01439576527109443920782513993773443524876978629559053936897031055091890891432402230656366652954128583e-79;

	nodes[119] 	= -13.799722290211676634645246746672663077210113349417075817978872250797613612101356870995034173507377295635026672936749886803425704;
	weights[119] 	= 7.7306185241134158744827181222033375335739383774211111787326644407546861248725212485793235551516639292e-84;

	nodes[120] 	= 13.799722290211676634645246746672663077210113349417075817978872250797613612101356870995034173507377295635026672936749886803425704;
	weights[120] 	= 7.7306185241134158744827181222033375335739383774211111787326644407546861248725212485793235551516639292e-84;

	nodes[121] 	= -14.209085995284870755168244250887024607682261252127641957455308540453641032143064854517590954304505055923935646091216122679414902;
	weights[121] 	= 8.932168157226452166353201625568986548290800890314048178142819269065800215868528134816896504992990208726e-89;

	nodes[122] 	= 14.209085995284870755168244250887024607682261252127641957455308540453641032143064854517590954304505055923935646091216122679414902;
	weights[122] 	= 8.932168157226452166353201625568986548290800890314048178142819269065800215868528134816896504992990208726e-89;

	nodes[123] 	= -14.669595158833972632746354112896108268342288273948581450309202176729893756512710473541748176178251430784262362511846236401156456;
	weights[123] 	= 1.72727980594728851329952877284176031106601789802516921137384347428301680334688780287065420403638924708491e-94;

	nodes[124] 	= 14.669595158833972632746354112896108268342288273948581450309202176729893756512710473541748176178251430784262362511846236401156456;
	weights[124] 	= 1.72727980594728851329952877284176031106601789802516921137384347428301680334688780287065420403638924708491e-94;

	nodes[125] 	= -15.228338148167350978246954433464407902364841002131944779712476626413017495471319969354211431687596629328915955984459563998622047;
	weights[125] 	= 1.2504497577089510106655869539435023556475979231248678409063639429652356269621149739741956883863508600330854e-101;

	nodes[126] 	= 15.228338148167350978246954433464407902364841002131944779712476626413017495471319969354211431687596629328915955984459563998622047;
	weights[126] 	= 1.2504497577089510106655869539435023556475979231248678409063639429652356269621149739741956883863508600330854e-101;

}
#endif /*(__Gauss_Hermite_Nodes_and_Weights_127_hpp__)*/