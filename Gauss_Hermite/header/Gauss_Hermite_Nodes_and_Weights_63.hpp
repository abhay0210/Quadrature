//
//        Gauss_Hermite_Nodes_and_Weights_63.hpp
//
//
//        Created by Sivaram Ambikasaran on 2014-02-22.09:42:47.
//
//
//        Array of nodes and weights for Gauss Hermite quadrature of order 63.
//
//

#ifndef __Gauss_Hermite_Nodes_and_Weights_63_hpp__
#define __Gauss_Hermite_Nodes_and_Weights_63_hpp__

void Gauss_Hermite_Nodes_and_Weights_63(long double*& nodes, long double*& weights) {
	nodes	= new long double[63];
	weights	= new long double[63];

	nodes[0] 	= 0;
	weights[0] 	= 0.27876694884925165436552750591125718022110220164415339884198329185662804607685130947660231242592161340747095477134514802232390948;

	nodes[1] 	= -0.27879538567115223986687628627201643310144236609798045363082692611045425816750019178247231470132808998902845058297989427647066096;
	weights[1] 	= 0.25799889943138332612723393346016383303209611071569710384272468270891451279003596845052471041268613555465241946728110403906034;

	nodes[2] 	= 0.27879538567115223986687628627201643310144236609798045363082692611045425816750019178247231470132808998902845058297989427647066096;
	weights[2] 	= 0.25799889943138332612723393346016383303209611071569710384272468270891451279003596845052471041268613555465241946728110403906034;

	nodes[3] 	= -0.55776166427908221668763665253821548061911514424889703563624631465581632979520834001297222548327758629651261360879809911396724083;
	weights[3] 	= 0.20448695346897398822591165610341537300468923441424982099622369968205548045812526242036064915691787619522135083642015614432223;

	nodes[4] 	= 0.55776166427908221668763665253821548061911514424889703563624631465581632979520834001297222548327758629651261360879809911396724083;
	weights[4] 	= 0.20448695346897398822591165610341537300468923441424982099622369968205548045812526242036064915691787619522135083642015614432223;

	nodes[5] 	= -0.83707109558947615977737795461293130359478409310090710081874650124670476568891905160545986355847023952682276784745836046226183011;
	weights[5] 	= 0.1387195081765846350722390963505322301847833617786442482346040660638902581899605276059042380031566407762290932742264795936366;

	nodes[6] 	= 0.83707109558947615977737795461293130359478409310090710081874650124670476568891905160545986355847023952682276784745836046226183011;
	weights[6] 	= 0.1387195081765846350722390963505322301847833617786442482346040660638902581899605276059042380031566407762290932742264795936366;

	nodes[7] 	= -1.1168987050996462690510970277839582578953057037674950176220913162717890112081204285334908629423962962822938973166503576005296587;
	weights[7] 	= 0.080467087994200832385087386019546865770269236793236536628358529257014785211664861823034866750170265239342525432243587151184;

	nodes[8] 	= 1.1168987050996462690510970277839582578953057037674950176220913162717890112081204285334908629423962962822938973166503576005296587;
	weights[8] 	= 0.080467087994200832385087386019546865770269236793236536628358529257014785211664861823034866750170265239342525432243587151184;

	nodes[9] 	= -1.3974237486049625107570752063701698324904775745953563662593927163055559382490647613924140472150468302086684636667140215679142584;
	weights[9] 	= 0.03985826402781703286499086885780612801758874575286978514205795170799217102711092651217366303424492131195796074969822744515;

	nodes[10] 	= 1.3974237486049625107570752063701698324904775745953563662593927163055559382490647613924140472150468302086684636667140215679142584;
	weights[10] 	= 0.03985826402781703286499086885780612801758874575286978514205795170799217102711092651217366303424492131195796074969822744515;

	nodes[11] 	= -1.6788312791720137520802800622638368448999926784363457075682042279732313816816685203607669979956646881837606118419053008833141576;
	weights[11] 	= 0.0168292991996521044559098701554544241159215461210835714719524270311459596236443965104549355203958591599918747813732986025;

	nodes[12] 	= 1.6788312791720137520802800622638368448999926784363457075682042279732313816816685203607669979956646881837606118419053008833141576;
	weights[12] 	= 0.0168292991996521044559098701554544241159215461210835714719524270311459596236443965104549355203958591599918747813732986025;

	nodes[13] 	= -1.9613138583081485293922008411321290039204885402148899628390911222156765951260237557670032810034370542217460463535438568910673943;
	weights[13] 	= 0.0060436044551375711320924715153260077518408274437932192457698647872813659794657357408191968482184535651077381947472701135;

	nodes[14] 	= 1.9613138583081485293922008411321290039204885402148899628390911222156765951260237557670032810034370542217460463535438568910673943;
	weights[14] 	= 0.0060436044551375711320924715153260077518408274437932192457698647872813659794657357408191968482184535651077381947472701135;

	nodes[15] 	= -2.2450734604812066298995918179329538318117575936561316827186954649648641099194697017635457324698615468126553073173292656040188063;
	weights[15] 	= 0.001840922262244210376012429791697477658367938289533949240513335648580371440975616029813135676905778662991747979082049616;

	nodes[16] 	= 2.2450734604812066298995918179329538318117575936561316827186954649648641099194697017635457324698615468126553073173292656040188063;
	weights[16] 	= 0.001840922262244210376012429791697477658367938289533949240513335648580371440975616029813135676905778662991747979082049616;

	nodes[17] 	= -2.5303236304712010926855221718499185184914598880031160940126908338546197524165510034505584764250290499817475054214551398146501635;
	weights[17] 	= 0.000474117026103206754395975199216212074896092265311240272076227814233725411659596285551074048415683229351441694422628329;

	nodes[18] 	= 2.5303236304712010926855221718499185184914598880031160940126908338546197524165510034505584764250290499817475054214551398146501635;
	weights[18] 	= 0.000474117026103206754395975199216212074896092265311240272076227814233725411659596285551074048415683229351441694422628329;

	nodes[19] 	= -2.8172919672837977750747135657354513613131890107694967273506875592710360397886461665379736787903100215828027317994438071303360742;
	weights[19] 	= 0.000102848808006856425543062213641967411456775629431751510780595397892208758652685621036948216825467492989614623488377035;

	nodes[20] 	= 2.8172919672837977750747135657354513613131890107694967273506875592710360397886461665379736787903100215828027317994438071303360742;
	weights[20] 	= 0.000102848808006856425543062213641967411456775629431751510780595397892208758652685621036948216825467492989614623488377035;

	nodes[21] 	= -3.106223027928256632913861674603630747465393839087936483196210231997551713161865563579599365252050134770219292005713828263388192;
	weights[21] 	= 0.000018709113003788721602783275540473444965489009300156312981646756307424449191221582448822057664897810269493144677014157;

	nodes[22] 	= 3.106223027928256632913861674603630747465393839087936483196210231997551713161865563579599365252050134770219292005713828263388192;
	weights[22] 	= 0.000018709113003788721602783275540473444965489009300156312981646756307424449191221582448822057664897810269493144677014157;

	nodes[23] 	= -3.3973817713303911852755941806287076122552468325408890151827623649602813666243178335862088090687742386776840399502010648486218817;
	weights[23] 	= 2.839311449846928847123011655670712487396049092775317364734895469350455748711698397548156013064526286640391182351941e-6;

	nodes[24] 	= 3.3973817713303911852755941806287076122552468325408890151827623649602813666243178335862088090687742386776840399502010648486218817;
	weights[24] 	= 2.839311449846928847123011655670712487396049092775317364734895469350455748711698397548156013064526286640391182351941e-6;

	nodes[25] 	= -3.6910577000963465117322810559754088960976669855413892261067994454331987293295868819019825090773397568610778353297034924410870649;
	weights[25] 	= 3.57347329499908777461505032557635302807528736301168020050022793613967870690988640883603872826702790112588381357362e-7;

	nodes[26] 	= 3.6910577000963465117322810559754088960976669855413892261067994454331987293295868819019825090773397568610778353297034924410870649;
	weights[26] 	= 3.57347329499908777461505032557635302807528736301168020050022793613967870690988640883603872826702790112588381357362e-7;

	nodes[27] 	= -3.9875699104197157485227052068068217297582370922994816318788549154222634527103454010082077927764151061607185787046837967198449449;
	weights[27] 	= 3.70416259848969809883356560994560111410206727229597810449700651856790330703312167597197860317246593663975681774355e-8;

	nodes[28] 	= 3.9875699104197157485227052068068217297582370922994816318788549154222634527103454010082077927764151061607185787046837967198449449;
	weights[28] 	= 3.70416259848969809883356560994560111410206727229597810449700651856790330703312167597197860317246593663975681774355e-8;

	nodes[29] 	= -4.2872733352824404031727616199453756431055307175679109695532826475711921721135859828725964876660287514627377700903890132071708214;
	weights[29] 	= 3.137192953538307864494356292906099595973254028829441741308207493843595412998138703956928890396666559899070973123e-9;

	nodes[30] 	= 4.2872733352824404031727616199453756431055307175679109695532826475711921721135859828725964876660287514627377700903890132071708214;
	weights[30] 	= 3.137192953538307864494356292906099595973254028829441741308207493843595412998138703956928890396666559899070973123e-9;

	nodes[31] 	= -4.5905665744435190229271294569091371783790024323492410861759357409803775126226698804748365894318562172789729808161919842904885636;
	weights[31] 	= 2.1508698297874961767906986287896880574869019096377100329761939199973634802185117278593064924666727757019874820815e-10;

	nodes[32] 	= 4.5905665744435190229271294569091371783790024323492410861759357409803775126226698804748365894318562172789729808161919842904885636;
	weights[32] 	= 2.1508698297874961767906986287896880574869019096377100329761939199973634802185117278593064924666727757019874820815e-10;

	nodes[33] 	= -4.8979018644975742350745099214868435821955529831845551316290306063786339486180091821683426021766219536437266305060408655887171342;
	weights[33] 	= 1.1808921844569692381799513223658609171332546568729045894520409155319710260896491974423816114762248472589716692356e-11;

	nodes[34] 	= 4.8979018644975742350745099214868435821955529831845551316290306063786339486180091821683426021766219536437266305060408655887171342;
	weights[34] 	= 1.1808921844569692381799513223658609171332546568729045894520409155319710260896491974423816114762248472589716692356e-11;

	nodes[35] 	= -5.2097979830408354861575136416262637511981001730329306018491029672248453247152317765747747515402938225749520752545235502596806016;
	weights[35] 	= 5.126506238519784699838400933299492745197313103324602235947350463301341307341209776908845519518900289964024991674e-13;

	nodes[36] 	= 5.2097979830408354861575136416262637511981001730329306018491029672248453247152317765747747515402938225749520752545235502596806016;
	weights[36] 	= 5.126506238519784699838400933299492745197313103324602235947350463301341307341209776908845519518900289964024991674e-13;

	nodes[37] 	= -5.5268572526403031425047575122839628752101242335934641464910927719819035576131331686757356595619822532168513202381633886026736274;
	weights[37] 	= 1.733581795578910443830642267494796268899065191196183361010798228643868681596707438671142529945755055561114841712e-14;

	nodes[38] 	= 5.5268572526403031425047575122839628752101242335934641464910927719819035576131331686757356595619822532168513202381633886026736274;
	weights[38] 	= 1.733581795578910443830642267494796268899065191196183361010798228643868681596707438671142529945755055561114841712e-14;

	nodes[39] 	= -5.8497884000810673462526582961481798075067105300919912788404889163834232723590017775559340599156352193680848463098351493433491743;
	weights[39] 	= 4.4857058689315818406944409797759774034614803628070005623638187198034692254623611430790461588078432927222158965e-16;

	nodes[40] 	= 5.8497884000810673462526582961481798075067105300919912788404889163834232723590017775559340599156352193680848463098351493433491743;
	weights[40] 	= 4.4857058689315818406944409797759774034614803628070005623638187198034692254623611430790461588078432927222158965e-16;

	nodes[41] 	= -6.1794379922705969862418461787262825201129860919635336521279193107471552120276338701625663967502072548883163498437626291759637905;
	weights[41] 	= 8.69255369584585252225619256427555742937458664271947019926972125538366852750399842609980901113039240837054715172e-18;

	nodes[42] 	= 6.1794379922705969862418461787262825201129860919635336521279193107471552120276338701625663967502072548883163498437626291759637905;
	weights[42] 	= 8.69255369584585252225619256427555742937458664271947019926972125538366852750399842609980901113039240837054715172e-18;

	nodes[43] 	= -6.5168348106821160605273395854042057022364930074627114030029050437959984362362035626902720356736560837196765259133900947927967196;
	weights[43] 	= 1.228843562883530369902403710388255598873412285562054395220672430971268634501676288931862507067931202550580076732e-19;

	nodes[44] 	= 6.5168348106821160605273395854042057022364930074627114030029050437959984362362035626902720356736560837196765259133900947927967196;
	weights[44] 	= 1.228843562883530369902403710388255598873412285562054395220672430971268634501676288931862507067931202550580076732e-19;

	nodes[45] 	= -6.8632544331795368527353285876065683928790457764429327977175261895706342404666657739411337714281308168527643250613394855473367464;
	weights[45] 	= 1.22666299091434557721622529774869407602093940971247446816706921071416398548210239471052739383492491949682031386e-21;

	nodes[46] 	= 6.8632544331795368527353285876065683928790457764429327977175261895706342404666657739411337714281308168527643250613394855473367464;
	weights[46] 	= 1.22666299091434557721622529774869407602093940971247446816706921071416398548210239471052739383492491949682031386e-21;

	nodes[47] 	= -7.2203167078889678461161324222529357196213999998306858937249969852917305628404384334905078139752208690218902321422997793541151126;
	weights[47] 	= 8.29638631162099766157527065316520548168256530156457302357793297277914979984384072610671309086767945629627006276e-24;

	nodes[48] 	= 7.2203167078889678461161324222529357196213999998306858937249969852917305628404384334905078139752208690218902321422997793541151126;
	weights[48] 	= 8.29638631162099766157527065316520548168256530156457302357793297277914979984384072610671309086767945629627006276e-24;

	nodes[49] 	= -7.590139519864106676247978319446824342087569412292652424262606901691256928427290402303346665914535504220686918717355892729419833;
	weights[49] 	= 3.602742663528516382023406585222509778967498238718358260503758149274299615011007991945770787592379758750195447359e-26;

	nodes[50] 	= 7.590139519864106676247978319446824342087569412292652424262606901691256928427290402303346665914535504220686918717355892729419833;
	weights[50] 	= 3.602742663528516382023406585222509778967498238718358260503758149274299615011007991945770787592379758750195447359e-26;

	nodes[51] 	= -7.9755950801420373181541806298500951701192434180248807719050808551241504137590569803240149286582967587978246022202390381278743047;
	weights[51] 	= 9.343783717565823964502468621954640232103875187452321934339420584184098796700389124622775843543908173070680394198e-29;

	nodes[52] 	= 7.9755950801420373181541806298500951701192434180248807719050808551241504137590569803240149286582967587978246022202390381278743047;
	weights[52] 	= 9.343783717565823964502468621954640232103875187452321934339420584184098796700389124622775843543908173070680394198e-29;

	nodes[53] 	= -8.3807683451863219343010651043787608532977152347702575229250713555666528209869306774796753241543636032950029037787686638357259202;
	weights[53] 	= 1.3071305930820624390476987787916261336159576329844028020972477389156976378803743302883811853361295473812842788101e-31;

	nodes[54] 	= 8.3807683451863219343010651043787608532977152347702575229250713555666528209869306774796753241543636032950029037787686638357259202;
	weights[54] 	= 1.3071305930820624390476987787916261336159576329844028020972477389156976378803743302883811853361295473812842788101e-31;

	nodes[55] 	= -8.8118581437284546442526628275570214801791640813865354980810929056819717301596176174281628368071651756665958830276252020337236552;
	weights[55] 	= 8.4687478191903566328104288525101266780481535723048439565330437875526153026144736966614940457962580328375629261239e-35;

	nodes[56] 	= 8.8118581437284546442526628275570214801791640813865354980810929056819717301596176174281628368071651756665958830276252020337236552;
	weights[56] 	= 8.4687478191903566328104288525101266780481535723048439565330437875526153026144736966614940457962580328375629261239e-35;

	nodes[57] 	= -9.2792019543050391319404745506495502293680020473363772262624581963515999386697863079501043835359393211169857374245181557091565699;
	weights[57] 	= 1.97968047083199197900260998813248003260813336836341287735274705711677633236767879675080899321403360201154311127375e-38;

	nodes[58] 	= 9.2792019543050391319404745506495502293680020473363772262624581963515999386697863079501043835359393211169857374245181557091565699;
	weights[58] 	= 1.97968047083199197900260998813248003260813336836341287735274705711677633236767879675080899321403360201154311127375e-38;

	nodes[59] 	= -9.8028759912974963635223935286507015418417635699756951594894390953871573217220723465188547590583643836751380859864010582083868185;
	weights[59] 	= 1.040077861522466722125595999076364581780831584574876918704468792943661448139224752362047666450486416673280138173381e-42;

	nodes[60] 	= 9.8028759912974963635223935286507015418417635699756951594894390953871573217220723465188547590583643836751380859864010582083868185;
	weights[60] 	= 1.040077861522466722125595999076364581780831584574876918704468792943661448139224752362047666450486416673280138173381e-42;

	nodes[61] 	= -10.435499877854168053468115427285242310886331684227968489048490428880582822528030782992650183940973513955642556859553599014206541;
	weights[61] 	= 3.7099206434903005582337615782288920541117115165016047771557633549982209534664515095511193019638066264428070791691218e-48;

	nodes[62] 	= 10.435499877854168053468115427285242310886331684227968489048490428880582822528030782992650183940973513955642556859553599014206541;
	weights[62] 	= 3.7099206434903005582337615782288920541117115165016047771557633549982209534664515095511193019638066264428070791691218e-48;

}
#endif /*(__Gauss_Hermite_Nodes_and_Weights_63_hpp__)*/