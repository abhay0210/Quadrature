//
//        Gauss_Chebyshev_First_Kind_Nodes_and_Weights_60.hpp
//
//
//        Created by Sivaram Ambikasaran on 2014-02-22.00:17:35.
//
//
//        Array of nodes and weights for Gauss Chebyshev_First_Kind quadrature of order 60.
//
//

#ifndef __Gauss_Chebyshev_First_Kind_Nodes_and_Weights_60_hpp__
#define __Gauss_Chebyshev_First_Kind_Nodes_and_Weights_60_hpp__

void Gauss_Chebyshev_First_Kind_Nodes_and_Weights_60(long double*& nodes, long double& weight) {
	weight 		= 0.05235987755982988730771072305465838140328615665625176368291574320513027343810348331046724708903528446636913477522137177745156408;

	nodes		= new long double[60];

	nodes[0] 	= 0.9996573249755572800367608883676798759498759712410784612646063662392422974715428562293834050442312984634498832941389799634242624;
	nodes[1] 	= 0.99691733373312797619777340874204442015892688159484389219444619080438632739845733442733062305856969433955675601839807716157850834;
	nodes[2] 	= 0.99144486137381041114455752692856287127773827444810227145877460352892206840508253176326543345327739735737867993502493944915599907;
	nodes[3] 	= 0.98325490756395458455463205643050898757462365466566748250076649849256581807966440955535515376447004166617499318977953124208780784;
	nodes[4] 	= 0.97236992039767660183364583411879764400257636940626119070421153809499094534665314378675511471726375350675008156500966523071981371;
	nodes[5] 	= 0.95881973486819304976102854139259829104918091884905898289427459114721584181133683824350218741938328339317378670737869711681536;
	nodes[6] 	= 0.9426414910921783947771677362823118828448666906665038857633168633578846359980566820592045665666522545936480076245309186972496288;
	nodes[7] 	= 0.92387953251128675612818318939678828682241662586364248611509773128053500750110235871483993485034459609796302578224788303086917758;
	nodes[8] 	= 0.90258528434986060676264514909577175681638382709920851882152420265785431248845421700766468497135058388337357371671500716515104594;
	nodes[9] 	= 0.87881711266196537412999514368452479961065730960910903334354146629399380025272166865457372341346786342386713946283125092308446861;
	nodes[10] 	= 0.85264016435409222151938345813041213581726628192900039512475512124315890641500684097802742316029848376151483754223547596541168168;
	nodes[11] 	= 0.82412618862201566172968490310231205813442794999317695747490187145891126797624066485690378297470855055547612950915261119102458241;
	nodes[12] 	= 0.79335334029123516457977696150129927662867592105191023422448078294540218227127872910059956585805247319221357878427644228834604483;
	nodes[13] 	= 0.76040596560003093817459436484490199988874706603899013886773439429415459107908924277333296830793375116931117136366917693053744542;
	nodes[14] 	= 0.7253743710122876379932841111897274422634390149615393825300319020418347056757877811564862043520042899503288224813656772832007514;
	nodes[15] 	= 0.6883545756937539843892561434196122934864693120960059675826441896822716856436476508876382377956834030299743618612481360578113769;
	nodes[16] 	= 0.6494480483301836557263207708937628792775028121719139751875575587402139250066933647263520868975206668587108878942509868990498798;
	nodes[17] 	= 0.6087614290087206394160975428981640045163937119624752300249739679013760344449928395262516481109938502089543912735313835483999889;
	nodes[18] 	= 0.5664062369248328318216250522337649325186884560998114946752298950612099347939978556654077270050934417470763102700878301711614707;
	nodes[19] 	= 0.5224985647159488649878978801782938234153871915232637092518214207268149426489290275036760050339594761220263879039268087250727801;
	nodes[20] 	= 0.4771587602596084150488630081893860525344887797178147520127849455124273548226138287257074000102718223414234953902121712383514823;
	nodes[21] 	= 0.4305110968082951443761483565082794876402384254950323975192162957431763926044594787619228960534762525924804457483102469904170376;
	nodes[22] 	= 0.3826834323650897717284599840303988667613445624856270414338006356275460339600896922370137853422835471484242886614935559007560102;
	nodes[23] 	= 0.3338068592337709288283112855367461082971208424937535073132089397523518930729710448290030668669493748074641052955285443430379281;
	nodes[24] 	= 0.2840153447039226174443896906991853505161070573102552231215673484127192597030054928991168769215803504767757197037615291729084368;
	nodes[25] 	= 0.2334453638559054117677444302028708487857419038875196003642426891053811361355490570870159830673789934428449642260130198336146086;
	nodes[26] 	= 0.1822355254921474566025733714374098829561196246275137468955824690637300449189674392858715982587185034243368362608617417667121834;
	nodes[27] 	= 0.1305261922200515915484062278954890101937407048117322518906169483351328252298236296142403689922921229057494469979714407425231327;
	nodes[28] 	= 0.0784590957278449450329602459934596986819558771060315613466223311989430445122135521507609019966420333278974442075623959741264635;
	nodes[29] 	= 0.0261769483078731526106116855541126637933910276801086382187863450508348938377148276765463002531693796623523019205957749576727869;
	nodes[30] 	= -0.0261769483078731526106116855541126637933910276801086382187863450508348938377148276765463002531693796623523019205957749576727869;
	nodes[31] 	= -0.0784590957278449450329602459934596986819558771060315613466223311989430445122135521507609019966420333278974442075623959741264635;
	nodes[32] 	= -0.1305261922200515915484062278954890101937407048117322518906169483351328252298236296142403689922921229057494469979714407425231327;
	nodes[33] 	= -0.1822355254921474566025733714374098829561196246275137468955824690637300449189674392858715982587185034243368362608617417667121834;
	nodes[34] 	= -0.2334453638559054117677444302028708487857419038875196003642426891053811361355490570870159830673789934428449642260130198336146086;
	nodes[35] 	= -0.2840153447039226174443896906991853505161070573102552231215673484127192597030054928991168769215803504767757197037615291729084368;
	nodes[36] 	= -0.3338068592337709288283112855367461082971208424937535073132089397523518930729710448290030668669493748074641052955285443430379281;
	nodes[37] 	= -0.3826834323650897717284599840303988667613445624856270414338006356275460339600896922370137853422835471484242886614935559007560102;
	nodes[38] 	= -0.4305110968082951443761483565082794876402384254950323975192162957431763926044594787619228960534762525924804457483102469904170376;
	nodes[39] 	= -0.4771587602596084150488630081893860525344887797178147520127849455124273548226138287257074000102718223414234953902121712383514823;
	nodes[40] 	= -0.5224985647159488649878978801782938234153871915232637092518214207268149426489290275036760050339594761220263879039268087250727801;
	nodes[41] 	= -0.5664062369248328318216250522337649325186884560998114946752298950612099347939978556654077270050934417470763102700878301711614707;
	nodes[42] 	= -0.6087614290087206394160975428981640045163937119624752300249739679013760344449928395262516481109938502089543912735313835483999889;
	nodes[43] 	= -0.6494480483301836557263207708937628792775028121719139751875575587402139250066933647263520868975206668587108878942509868990498798;
	nodes[44] 	= -0.6883545756937539843892561434196122934864693120960059675826441896822716856436476508876382377956834030299743618612481360578113769;
	nodes[45] 	= -0.7253743710122876379932841111897274422634390149615393825300319020418347056757877811564862043520042899503288224813656772832007514;
	nodes[46] 	= -0.7604059656000309381745943648449019998887470660389901388677343942941545910790892427733329683079337511693111713636691769305374454;
	nodes[47] 	= -0.7933533402912351645797769615012992766286759210519102342244807829454021822712787291005995658580524731922135787842764422883460448;
	nodes[48] 	= -0.8241261886220156617296849031023120581344279499931769574749018714589112679762406648569037829747085505554761295091526111910245824;
	nodes[49] 	= -0.8526401643540922215193834581304121358172662819290003951247551212431589064150068409780274231602984837615148375422354759654116817;
	nodes[50] 	= -0.8788171126619653741299951436845247996106573096091090333435414662939938002527216686545737234134678634238671394628312509230844686;
	nodes[51] 	= -0.9025852843498606067626451490957717568163838270992085188215242026578543124884542170076646849713505838833735737167150071651510459;
	nodes[52] 	= -0.9238795325112867561281831893967882868224166258636424861150977312805350075011023587148399348503445960979630257822478830308691776;
	nodes[53] 	= -0.9426414910921783947771677362823118828448666906665038857633168633578846359980566820592045665666522545936480076245309186972496288;
	nodes[54] 	= -0.95881973486819304976102854139259829104918091884905898289427459114721584181133683824350218741938328339317378670737869711681536;
	nodes[55] 	= -0.9723699203976766018336458341187976440025763694062611907042115380949909453466531437867551147172637535067500815650096652307198137;
	nodes[56] 	= -0.9832549075639545845546320564305089875746236546656674825007664984925658180796644095553551537644700416661749931897795312420878078;
	nodes[57] 	= -0.99144486137381041114455752692856287127773827444810227145877460352892206840508253176326543345327739735737867993502493944915599907;
	nodes[58] 	= -0.99691733373312797619777340874204442015892688159484389219444619080438632739845733442733062305856969433955675601839807716157850834;
	nodes[59] 	= -0.9996573249755572800367608883676798759498759712410784612646063662392422974715428562293834050442312984634498832941389799634242624;
}
#endif /*(__Gauss_Chebyshev_First_Kind_Nodes_and_Weights_60_hpp__)*/