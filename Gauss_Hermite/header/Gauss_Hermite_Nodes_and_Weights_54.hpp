//
//        Gauss_Hermite_Nodes_and_Weights_54.hpp
//
//
//        Created by Sivaram Ambikasaran on 2014-02-22.09:42:47.
//
//
//        Array of nodes and weights for Gauss Hermite quadrature of order 54.
//
//

#ifndef __Gauss_Hermite_Nodes_and_Weights_54_hpp__
#define __Gauss_Hermite_Nodes_and_Weights_54_hpp__

void Gauss_Hermite_Nodes_and_Weights_54(long double*& nodes, long double*& weights) {
	nodes	= new long double[54];
	weights	= new long double[54];

	nodes[0] 	= -0.15045704292086297296476969521816872933142118551847014422434925475079544831996694002429174401587715659746712299350959904378172754;
	weights[0] 	= 0.2941990845272919252085905803413301995793215246472378069150868662219808306571283554581745855320786474747067804854511873989819762;

	nodes[1] 	= 0.15045704292086297296476969521816872933142118551847014422434925475079544831996694002429174401587715659746712299350959904378172754;
	weights[1] 	= 0.2941990845272919252085905803413301995793215246472378069150868662219808306571283554581745855320786474747067804854511873989819762;

	nodes[2] 	= -0.45149624980624273206248297744810077215399944424532229973135752457109541324920718076193208980327088101238048616119841768754762807;
	weights[2] 	= 0.245642470504244587271623741841153350224489697850516772899046100972399923519379286894215382665583228718114481911989977966147906;

	nodes[3] 	= 0.45149624980624273206248297744810077215399944424532229973135752457109541324920718076193208980327088101238048616119841768754762807;
	weights[3] 	= 0.245642470504244587271623741841153350224489697850516772899046100972399923519379286894215382665583228718114481911989977966147906;

	nodes[4] 	= -0.75291217747488709251532173367034901073342672159042163770877998169027330561213535361511198078644226434443867256887587213975241431;
	weights[4] 	= 0.1711465279960140927501232961171746773330861046536793625730836875469735684581705637556604080254153930912752538403555583344673;

	nodes[5] 	= 0.75291217747488709251532173367034901073342672159042163770877998169027330561213535361511198078644226434443867256887587213975241431;
	weights[5] 	= 0.1711465279960140927501232961171746773330861046536793625730836875469735684581705637556604080254153930912752538403555583344673;

	nodes[6] 	= -1.0549605418738989338721953396283831982725005790661540912658030688592060479530443860825723661723358872733409139789214448752184034;
	weights[6] 	= 0.099382787160472611675470742800721902149320946131355689270140529782794378765451716792615899049336581626736102499078293206401;

	nodes[7] 	= 1.0549605418738989338721953396283831982725005790661540912658030688592060479530443860825723661723358872733409139789214448752184034;
	weights[7] 	= 0.099382787160472611675470742800721902149320946131355689270140529782794378765451716792615899049336581626736102499078293206401;

	nodes[8] 	= -1.3579040662442224843839604202879866864645448555610966139957455333634857157710900521596788930598201338564094364015540991505149473;
	weights[8] 	= 0.04801030616129549637500887568549262986202815832130217260929012901445925465634145666087481832980999408665698328084729882008;

	nodes[9] 	= 1.3579040662442224843839604202879866864645448555610966139957455333634857157710900521596788930598201338564094364015540991505149473;
	weights[9] 	= 0.04801030616129549637500887568549262986202815832130217260929012901445925465634145666087481832980999408665698328084729882008;

	nodes[10] 	= -1.6620156026589968217141194401223805385467573069970323738513479513094350617364085179257682978899023892158419870559642675735838705;
	weights[10] 	= 0.01924644137053951022120085938800101242727509891847133481723749045685961429293617215388872141279694428155398535296430000487;

	nodes[11] 	= 1.6620156026589968217141194401223805385467573069970323738513479513094350617364085179257682978899023892158419870559642675735838705;
	weights[11] 	= 0.01924644137053951022120085938800101242727509891847133481723749045685961429293617215388872141279694428155398535296430000487;

	nodes[12] 	= -1.967581597392067095653930494216673716898986979893374541273598241639229240510663786808045933137696471418237018821553754992627396;
	weights[12] 	= 0.0063820594170464546054767705636201026129394789835302692999928312808483274680487928433069666583070204501567289904066842244;

	nodes[13] 	= 1.967581597392067095653930494216673716898986979893374541273598241639229240510663786808045933137696471418237018821553754992627396;
	weights[13] 	= 0.0063820594170464546054767705636201026129394789835302692999928312808483274680487928433069666583070204501567289904066842244;

	nodes[14] 	= -2.2749060375416975723680242085873624080281623371360605127564291563586511173842580883755322470083909056093615260124585089050053564;
	weights[14] 	= 0.0017435254219654910137634258842401668320092095836452566668578628478987237841463130289239252011853868920883296286522432806;

	nodes[15] 	= 2.2749060375416975723680242085873624080281623371360605127564291563586511173842580883755322470083909056093615260124585089050053564;
	weights[15] 	= 0.0017435254219654910137634258842401668320092095836452566668578628478987237841463130289239252011853868920883296286522432806;

	nodes[16] 	= -2.5843150518736275218211130312566710722368402299814900707083333208806009681100612628671248659104914231122725267567450622941275146;
	weights[16] 	= 0.0003905161726631585719893436601790163838837632036783756913399502941784981811095907850306942016718014384636601044385861795;

	nodes[17] 	= 2.5843150518736275218211130312566710722368402299814900707083333208806009681100612628671248659104914231122725267567450622941275146;
	weights[17] 	= 0.0003905161726631585719893436601790163838837632036783756913399502941784981811095907850306942016718014384636601044385861795;

	nodes[18] 	= -2.8961623904571474802577473832310839848189854286532395509384669815028109833405028340761984547742884601240434998986785608566215674;
	weights[18] 	= 0.0000712943472724848659488195135145786008136300589222456165804459542328889918374862527627834606270553719884911360513206055;

	nodes[19] 	= 2.8961623904571474802577473832310839848189854286532395509384669815028109833405028340761984547742884601240434998986785608566215674;
	weights[19] 	= 0.0000712943472724848659488195135145786008136300589222456165804459542328889918374862527627834606270553719884911360513206055;

	nodes[20] 	= -3.2108360825282938304184649169844905248588637156695600366005854045875169797807834249021370545216164952864731163948676115007921893;
	weights[20] 	= 0.0000105354444418257434271621872822689706074008773833404075144366301524823631966965204810135063661435625909982401149595613;

	nodes[21] 	= 3.2108360825282938304184649169844905248588637156695600366005854045875169797807834249021370545216164952864731163948676115007921893;
	weights[21] 	= 0.0000105354444418257434271621872822689706074008773833404075144366301524823631966965204810135063661435625909982401149595613;

	nodes[22] 	= -3.5287666814910857611929050551603404162438239137507683706637165612306367209882506371922952791345397630804314466180630481198569442;
	weights[22] 	= 1.2498100284112902213207457926274351090391121096299041595936306899083654407565516544829314851003101478472883069477744e-6;

	nodes[23] 	= 3.5287666814910857611929050551603404162438239137507683706637165612306367209882506371922952791345397630804314466180630481198569442;
	weights[23] 	= 1.2498100284112902213207457926274351090391121096299041595936306899083654407565516544829314851003101478472883069477744e-6;

	nodes[24] 	= -3.8504376683661064748643480606742604053763658875812043836468117444441750087680880103127455779789443378037270504218155336322737212;
	weights[24] 	= 1.1786188465819040325975684291831669191150880691068175566560748003198848171626737088852843115897731931915836228264751e-7;

	nodes[25] 	= 3.8504376683661064748643480606742604053763658875812043836468117444441750087680880103127455779789443378037270504218155336322737212;
	weights[25] 	= 1.1786188465819040325975684291831669191150880691068175566560748003198848171626737088852843115897731931915836228264751e-7;

	nodes[26] 	= -4.1763988304784852127133624394133946792338166098841379968674379941237773685696188421906608176274715725757636193919437592006082071;
	weights[26] 	= 8.7334448358337263426357380571195160353251688840460631869330323487665814948169527820463886483624262686933570898042e-9;

	nodes[27] 	= 4.1763988304784852127133624394133946792338166098841379968674379941237773685696188421906608176274715725757636193919437592006082071;
	weights[27] 	= 8.7334448358337263426357380571195160353251688840460631869330323487665814948169527820463886483624262686933570898042e-9;

	nodes[28] 	= -4.5072838118199010675529600462816280254303657004916202044972452756632319299952688781767559579120622871949993064264907864739120235;
	weights[28] 	= 5.01473987047346803886512012628190986440211014565674771811106225717383500677232506731636171237012110895689515500588e-10;

	nodes[29] 	= 4.5072838118199010675529600462816280254303657004916202044972452756632319299952688781767559579120622871949993064264907864739120235;
	weights[29] 	= 5.01473987047346803886512012628190986440211014565674771811106225717383500677232506731636171237012110895689515500588e-10;

	nodes[30] 	= -4.8438336345819874707439684275868527766413226264667251425875662540329201315064562624523371487255045083952878708064663029849766621;
	weights[30] 	= 2.19439846768108755284690191084591733915232908770905461340520405208899346943541116468821338700727964734985586406238e-11;

	nodes[31] 	= 4.8438336345819874707439684275868527766413226264667251425875662540329201315064562624523371487255045083952878708064663029849766621;
	weights[31] 	= 2.19439846768108755284690191084591733915232908770905461340520405208899346943541116468821338700727964734985586406238e-11;

	nodes[32] 	= -5.1869289795928895505354899085441841356397559735037079426226058242914470701654907240916036477754714389420533977736457878414781467;
	weights[32] 	= 7.17134499785518001889722370269380244525073977358722633208143245443712794667275919328961117343824089669167522636367e-13;

	nodes[33] 	= 5.1869289795928895505354899085441841356397559735037079426226058242914470701654907240916036477754714389420533977736457878414781467;
	weights[33] 	= 7.17134499785518001889722370269380244525073977358722633208143245443712794667275919328961117343824089669167522636367e-13;

	nodes[34] 	= -5.5376356924033013317041736892766903462698147211319472205110190135260889432155313573654264567409722160633736771492866517677042886;
	weights[34] 	= 1.70734067334684107569067623756985895452580561195119607017848905003839828291722954227772964264913267168932332671747e-14;

	nodes[35] 	= 5.5376356924033013317041736892766903462698147211319472205110190135260889432155313573654264567409722160633736771492866517677042886;
	weights[35] 	= 1.70734067334684107569067623756985895452580561195119607017848905003839828291722954227772964264913267168932332671747e-14;

	nodes[36] 	= -5.8972709576411214999005048308379543523569596398131995785435269464140524559815298136589144466365328821548330084091699825584601197;
	weights[36] 	= 2.87098926320496338764043781507407167570676836064937615647929479321757626317779523299113688471928727790731612254538e-16;

	nodes[37] 	= 5.8972709576411214999005048308379543523569596398131995785435269464140524559815298136589144466365328821548330084091699825584601197;
	weights[37] 	= 2.87098926320496338764043781507407167570676836064937615647929479321757626317779523299113688471928727790731612254538e-16;

	nodes[38] 	= -6.2675031293697518237000693079737799651031872756234592513443750060044773808092686017752631481595187733841707356953839982276622624;
	weights[38] 	= 3.27825196978982733432954650998911830833229046727420513348007216107898428758321257416971976330676247206223080273356e-18;

	nodes[39] 	= 6.2675031293697518237000693079737799651031872756234592513443750060044773808092686017752631481595187733841707356953839982276622624;
	weights[39] 	= 3.27825196978982733432954650998911830833229046727420513348007216107898428758321257416971976330676247206223080273356e-18;

	nodes[40] 	= -6.6505091785664929851644858501847321495440792470668700445831503288513227022152756794325905709461908286733130154412156503649989108;
	weights[40] 	= 2.41469199997268789000129144747965812855819839494838509031257093521383905005100860261975348705428806715493821420921e-20;

	nodes[41] 	= 6.6505091785664929851644858501847321495440792470668700445831503288513227022152756794325905709461908286733130154412156503649989108;
	weights[41] 	= 2.41469199997268789000129144747965812855819839494838509031257093521383905005100860261975348705428806715493821420921e-20;

	nodes[42] 	= -7.0492370986783779108381770783199895268770525297853330510123351078375900843407143494964619832248391593074891467754195749011713485;
	weights[42] 	= 1.07064905864221394746769643782172385759921232144217380182487152977620024716299089108141859966734481808781481746574e-22;

	nodes[43] 	= 7.0492370986783779108381770783199895268770525297853330510123351078375900843407143494964619832248391593074891467754195749011713485;
	weights[43] 	= 1.07064905864221394746769643782172385759921232144217380182487152977620024716299089108141859966734481808781481746574e-22;

	nodes[44] 	= -7.4678752834836213328884016373489167090832981992123732062036868983502689147268621523770723168435033697690469598793551623345767223;
	weights[44] 	= 2.59233715574559135377287449744762824573291978562005150666619065757395124887752556980360552853792092604223414533857e-25;

	nodes[45] 	= 7.4678752834836213328884016373489167090832981992123732062036868983502689147268621523770723168435033697690469598793551623345767223;
	weights[45] 	= 2.59233715574559135377287449744762824573291978562005150666619065757395124887752556980360552853792092604223414533857e-25;

	nodes[46] 	= -7.9127752978124947498279618514948106278335022379910013339058953489917338149353284931846843294917072434417183982168723308179157544;
	weights[46] 	= 2.962627587149561996293007728665063926157919894576609232742357070292588674314278797565215763054791268007764006991655e-28;

	nodes[47] 	= 7.9127752978124947498279618514948106278335022379910013339058953489917338149353284931846843294917072434417183982168723308179157544;
	weights[47] 	= 2.962627587149561996293007728665063926157919894576609232742357070292588674314278797565215763054791268007764006991655e-28;

	nodes[48] 	= -8.3945256233272021657549736221662045280764943379287595171334074456923049203067692086206836845798247812344776437708681803247554015;
	weights[48] 	= 1.2587808691128592113636115940787489441262775564723455195374455974531423896233273904509081065245203944102574405340264e-31;

	nodes[49] 	= 8.3945256233272021657549736221662045280764943379287595171334074456923049203067692086206836845798247812344776437708681803247554015;
	weights[49] 	= 1.2587808691128592113636115940787489441262775564723455195374455974531423896233273904509081065245203944102574405340264e-31;

	nodes[50] 	= -8.933688332096193343476546801450442677318557065098090238777600460999003475383305762585114102370387068260738961019536009372409693;
	weights[50] 	= 1.26532007601691310642609352109092400389017730486546997421622390161037312897866767041061370301907744129624607603819154e-35;

	nodes[51] 	= 8.933688332096193343476546801450442677318557065098090238777600460999003475383305762585114102370387068260738961019536009372409693;
	weights[51] 	= 1.26532007601691310642609352109092400389017730486546997421622390161037312897866767041061370301907744129624607603819154e-35;

	nodes[52] 	= -9.5841655475234697931524688078810325079175084586644263714068958059690143668454332721016500628865580497503679546413473441276571756;
	weights[52] 	= 9.61656976982995023690761085345998499566073147973431921888406176405638073943176661755493162933836255748568682326994542e-41;

	nodes[53] 	= 9.5841655475234697931524688078810325079175084586644263714068958059690143668454332721016500628865580497503679546413473441276571756;
	weights[53] 	= 9.61656976982995023690761085345998499566073147973431921888406176405638073943176661755493162933836255748568682326994542e-41;

}
#endif /*(__Gauss_Hermite_Nodes_and_Weights_54_hpp__)*/