//
//        Gauss_Hermite_Nodes_and_Weights_30.hpp
//
//
//        Created by Sivaram Ambikasaran on 2014-02-22.09:42:47.
//
//
//        Array of nodes and weights for Gauss Hermite quadrature of order 30.
//
//

#ifndef __Gauss_Hermite_Nodes_and_Weights_30_hpp__
#define __Gauss_Hermite_Nodes_and_Weights_30_hpp__

void Gauss_Hermite_Nodes_and_Weights_30(long double*& nodes, long double*& weights) {
	nodes	= new long double[30];
	weights	= new long double[30];

	nodes[0] 	= -0.20112857654887148554576301324369218569341077745376790229216301060542807588599685311055061617390157407434264030936924704234116436;
	weights[0] 	= 0.3863948895418138625556018491651224636809651966592859824394151615209931415401308981790712356498952361140296995379191552942657215;

	nodes[1] 	= 0.20112857654887148554576301324369218569341077745376790229216301060542807588599685311055061617390157407434264030936924704234116436;
	weights[1] 	= 0.3863948895418138625556018491651224636809651966592859824394151615209931415401308981790712356498952361140296995379191552942657215;

	nodes[2] 	= -0.60392105862555230777815567875734181699774456998025870595321061626566229900925298321823964252442249026593525769586342437783368222;
	weights[2] 	= 0.280130930839212667413493211293434082047281571176987001114226391365751325543784870287406378455448356060857814883082029332602309;

	nodes[3] 	= 0.60392105862555230777815567875734181699774456998025870595321061626566229900925298321823964252442249026593525769586342437783368222;
	weights[3] 	= 0.280130930839212667413493211293434082047281571176987001114226391365751325543784870287406378455448356060857814883082029332602309;

	nodes[4] 	= -1.0083382710467234618049896086964179058476157910821486425523235707514893753438516180452588007152201122702743479002933488868494392;
	weights[4] 	= 0.14673584754089009975169364315184172174126480953629479615412689968684142992720962625577912965750858885222567619728227163326273;

	nodes[5] 	= 1.0083382710467234618049896086964179058476157910821486425523235707514893753438516180452588007152201122702743479002933488868494392;
	weights[5] 	= 0.14673584754089009975169364315184172174126480953629479615412689968684142992720962625577912965750858885222567619728227163326273;

	nodes[6] 	= -1.4155278001981885119407251055475798225289198683132580539473913973142919985620624298653330135157388572494464188695794567375006915;
	weights[6] 	= 0.0551441768702342511680754948183016309651571621160269099789017697641637856580663494656282804471481683883788567245589562548466;

	nodes[7] 	= 1.4155278001981885119407251055475798225289198683132580539473913973142919985620624298653330135157388572494464188695794567375006915;
	weights[7] 	= 0.0551441768702342511680754948183016309651571621160269099789017697641637856580663494656282804471481683883788567245589562548466;

	nodes[8] 	= -1.8267411436036880388358804835061281461296893316381316671947076683560581558457792127510213638207231622192167065879599000531581329;
	weights[8] 	= 0.0147038297048266835152773557787022565313269654098072506652114191324994322266582334345883560424160687228235439369764002494182;

	nodes[9] 	= 1.8267411436036880388358804835061281461296893316381316671947076683560581558457792127510213638207231622192167065879599000531581329;
	weights[9] 	= 0.0147038297048266835152773557787022565313269654098072506652114191324994322266582334345883560424160687228235439369764002494182;

	nodes[10] 	= -2.2433914677615040724729799948250613617699072057549839019270092101193836209886872234460036001004925936880160797326442467451108347;
	weights[10] 	= 0.0027379224730676584629894256895266263787148938867200257637094411505812011887739123805714804530451859395004790999715892987214;

	nodes[11] 	= 2.2433914677615040724729799948250613617699072057549839019270092101193836209886872234460036001004925936880160797326442467451108347;
	weights[11] 	= 0.0027379224730676584629894256895266263787148938867200257637094411505812011887739123805714804530451859395004790999715892987214;

	nodes[12] 	= -2.6671321245356172005711064642208749174192246351126647773941389741030067476883311391478881262519525699341857903129680079197336321;
	weights[12] 	= 0.0003483101243186855234209953231825356603725734535520025063737149080802193251576304282655672483109797880904180994605296191478;

	nodes[13] 	= 2.6671321245356172005711064642208749174192246351126647773941389741030067476883311391478881262519525699341857903129680079197336321;
	weights[13] 	= 0.0003483101243186855234209953231825356603725734535520025063737149080802193251576304282655672483109797880904180994605296191478;

	nodes[14] 	= -3.0999705295864417486887333223746390193308538203442863702059811202285701607683891765790528185436632681125312973930899823082415736;
	weights[14] 	= 0.0000293872522892298764150118423411869058913322732337964869130593502302724976512979345127127570133553918147887939141420161926;

	nodes[15] 	= 3.0999705295864417486887333223746390193308538203442863702059811202285701607683891765790528185436632681125312973930899823082415736;
	weights[15] 	= 0.0000293872522892298764150118423411869058913322732337964869130593502302724976512979345127127570133553918147887939141420161926;

	nodes[16] 	= -3.5444438731553498869254009021683636498383499040555925262152033227688469525275959590161529017008499982335002958935594898305258077;
	weights[16] 	= 1.57909488732471028834638794021891360850016376569031780691209641284832542534855622753550440146514095683566607445381810417e-6;

	nodes[17] 	= 3.5444438731553498869254009021683636498383499040555925262152033227688469525275959590161529017008499982335002958935594898305258077;
	weights[17] 	= 1.57909488732471028834638794021891360850016376569031780691209641284832542534855622753550440146514095683566607445381810417e-6;

	nodes[18] 	= -4.0039086038612288152278760133218180762992084599020752974927675929018699936646149700886413181409136777726266172922983813292991763;
	weights[18] 	= 5.1085224507759462773896320440283768986506798530929621288668077311249673576348070055063019432397158475556738770385329342e-8;

	nodes[19] 	= 4.0039086038612288152278760133218180762992084599020752974927675929018699936646149700886413181409136777726266172922983813292991763;
	weights[19] 	= 5.1085224507759462773896320440283768986506798530929621288668077311249673576348070055063019432397158475556738770385329342e-8;

	nodes[20] 	= -4.483055357092518341887037619709105216099539530886469812908056682520065442934523808366224509891844985499995633933515940835729892;
	weights[20] 	= 9.178580424378528208500757424924177490250224373331011652833525764825202491341015670892373027516794844812996348419149576e-10;

	nodes[21] 	= 4.483055357092518341887037619709105216099539530886469812908056682520065442934523808366224509891844985499995633933515940835729892;
	weights[21] 	= 9.178580424378528208500757424924177490250224373331011652833525764825202491341015670892373027516794844812996348419149576e-10;

	nodes[22] 	= -4.9889189685899439444864971063309542953809558829871568428497326969767320544270489406538374772547727722779539147603898380166992876;
	weights[22] 	= 8.1061862974630442039934479617306500052500646898427025635169557785669069532166682834643389106278185665718802169538478509e-12;

	nodes[23] 	= 4.9889189685899439444864971063309542953809558829871568428497326969767320544270489406538374772547727722779539147603898380166992876;
	weights[23] 	= 8.1061862974630442039934479617306500052500646898427025635169557785669069532166682834643389106278185665718802169538478509e-12;

	nodes[24] 	= -5.5331471515674957251183335555803967332562582810899169424972486590869047593145966751856347044190940599261515206394247826362299529;
	weights[24] 	= 2.87860708054870606219239791141569768119480963008387674513665195829864485006794785791480742894174988986272422637943746991e-14;

	nodes[25] 	= 5.5331471515674957251183335555803967332562582810899169424972486590869047593145966751856347044190940599261515206394247826362299529;
	weights[25] 	= 2.87860708054870606219239791141569768119480963008387674513665195829864485006794785791480742894174988986272422637943746991e-14;

	nodes[26] 	= -6.1382792201239346203949923785375795010650976900989716657634180429604515527979175995555290662250317619950183861449269452434694307;
	weights[26] 	= 2.810333602750903708762774915339798584733124198786098042754862186296199564290341573124443870233410870007431524888162675775e-17;

	nodes[27] 	= 6.1382792201239346203949923785375795010650976900989716657634180429604515527979175995555290662250317619950183861449269452434694307;
	weights[27] 	= 2.810333602750903708762774915339798584733124198786098042754862186296199564290341573124443870233410870007431524888162675775e-17;

	nodes[28] 	= -6.8633452935298915810611083575550266214837110480914731911094382399981871815957869709155699363085909265022401310682313604180061211;
	weights[28] 	= 2.908254700131226229411027473651280300111142807523348483692341919540039336368974931241400435284145055779319305154768634521e-21;

	nodes[29] 	= 6.8633452935298915810611083575550266214837110480914731911094382399981871815957869709155699363085909265022401310682313604180061211;
	weights[29] 	= 2.908254700131226229411027473651280300111142807523348483692341919540039336368974931241400435284145055779319305154768634521e-21;

}
#endif /*(__Gauss_Hermite_Nodes_and_Weights_30_hpp__)*/