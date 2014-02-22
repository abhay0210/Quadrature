//
//        Gauss_Hermite_Nodes_and_Weights_44.hpp
//
//
//        Created by Sivaram Ambikasaran on 2014-02-22.09:42:47.
//
//
//        Array of nodes and weights for Gauss Hermite quadrature of order 44.
//
//

#ifndef __Gauss_Hermite_Nodes_and_Weights_44_hpp__
#define __Gauss_Hermite_Nodes_and_Weights_44_hpp__

void Gauss_Hermite_Nodes_and_Weights_44(long double*& nodes, long double*& weights) {
	nodes	= new long double[44];
	weights	= new long double[44];

	nodes[0] 	= -0.16650746707363238827938348922730434912424066420883980473052846878468108362063752575674355074941013788973744662784840380455488738;
	weights[0] 	= 0.3239426288419961026972012998159422747793139333171540765995798808841384102666889591913136768699705051810574738577488817886508508;

	nodes[1] 	= 0.16650746707363238827938348922730434912424066420883980473052846878468108362063752575674355074941013788973744662784840380455488738;
	weights[1] 	= 0.3239426288419961026972012998159422747793139333171540765995798808841384102666889591913136768699705051810574738577488817886508508;

	nodes[2] 	= -0.49973020830067431851081801830929375814707439724357993822217559129068325662855153863828736091042147357035400015579172911926023505;
	weights[2] 	= 0.259773396115888053020239438620266503839504371353112967692249220873009990565441590039791520070544153362143079112015416916637181;

	nodes[3] 	= 0.49973020830067431851081801830929375814707439724357993822217559129068325662855153863828736091042147357035400015579172911926023505;
	weights[3] 	= 0.259773396115888053020239438620266503839504371353112967692249220873009990565441590039791520070544153362143079112015416916637181;

	nodes[4] 	= -0.83357976100207343308802989429069789134549842667750655227592666820782159324058220505452231170772539667762182584858006406790631085;
	weights[4] 	= 0.1668671658256460492736501525513144315641556776894275597584497927569972198967680557195492721155690047497657076922141283393927;

	nodes[5] 	= 0.83357976100207343308802989429069789134549842667750655227592666820782159324058220505452231170772539667762182584858006406790631085;
	weights[5] 	= 0.1668671658256460492736501525513144315641556776894275597584497927569972198967680557195492721155690047497657076922141283393927;

	nodes[6] 	= -1.1684854631902054980538483260056672405769657235534778683933674717815630420662192983621676245332444255249428747079593599410634551;
	weights[6] 	= 0.085670187300246279908707254487706194291480116345700038471930356410968000835308520693353104735304835456186537027721108688204;

	nodes[7] 	= 1.1684854631902054980538483260056672405769657235534778683933674717815630420662192983621676245332444255249428747079593599410634551;
	weights[7] 	= 0.085670187300246279908707254487706194291480116345700038471930356410968000835308520693353104735304835456186537027721108688204;

	nodes[8] 	= -1.5048944344828715445835273550556706488973078698989651240874626814496289023293425660839659616309154272637495966594041455833075228;
	weights[8] 	= 0.035033757109687082098840829788292223522274852045466784751358173005587749589274947644828960109844670310463594399566720802356;

	nodes[9] 	= 1.5048944344828715445835273550556706488973078698989651240874626814496289023293425660839659616309154272637495966594041455833075228;
	weights[9] 	= 0.035033757109687082098840829788292223522274852045466784751358173005587749589274947644828960109844670310463594399566720802356;

	nodes[10] 	= -1.8432799206176101563920701204515841544918203260376717201031551423015560882699379872102410686116914887121827863293980811560778126;
	weights[10] 	= 0.01135786693906994574800009361629386301842756052352191702384631695753916982863305278948319070160688420981345862175316789941;

	nodes[11] 	= 1.8432799206176101563920701204515841544918203260376717201031551423015560882699379872102410686116914887121827863293980811560778126;
	weights[11] 	= 0.01135786693906994574800009361629386301842756052352191702384631695753916982863305278948319070160688420981345862175316789941;

	nodes[12] 	= -2.1841510195665262685937367797700840848172596852785227444008406117499813272025651427435593879567972076031171866042725008560801705;
	weights[12] 	= 0.00290129377529662467645219982429591079063065601800813783039800629258976869097190145661059036622857538587687739404721571752;

	nodes[13] 	= 2.1841510195665262685937367797700840848172596852785227444008406117499813272025651427435593879567972076031171866042725008560801705;
	weights[13] 	= 0.00290129377529662467645219982429591079063065601800813783039800629258976869097190145661059036622857538587687739404721571752;

	nodes[14] 	= -2.5280644271476650969074144728946991221758499571039457837569924082112275285189996639873155354938045281186287318747544586917165013;
	weights[14] 	= 0.00057942043271566377619046199925277422373951063772405137933347742358218009964600425099006339220494289914454621609615240888;

	nodes[15] 	= 2.5280644271476650969074144728946991221758499571039457837569924082112275285189996639873155354938045281186287318747544586917165013;
	weights[15] 	= 0.00057942043271566377619046199925277422373951063772405137933347742358218009964600425099006339220494289914454621609615240888;

	nodes[16] 	= -2.8756390821704420840174283715858358117932967192226441279025651999835296298551854039029044552141007154343821866143842692934488921;
	weights[16] 	= 0.00008959797364061668860053979238653625500774161933150021404979761772748683296822133522756051213998935421026173726064308575;

	nodes[17] 	= 2.8756390821704420840174283715858358117932967192226441279025651999835296298551854039029044552141007154343821866143842692934488921;
	weights[17] 	= 0.00008959797364061668860053979238653625500774161933150021404979761772748683296822133522756051213998935421026173726064308575;

	nodes[18] 	= -3.2275749742774262785238698379537960309801739283927528155099011258835321230569827760228503397978556682713957621251054230795611775;
	weights[18] 	= 0.00001060017177251767206941474960925551511065768452717363413470521084042722511699877157457420896307921871640945512136402111;

	nodes[19] 	= 3.2275749742774262785238698379537960309801739283927528155099011258835321230569827760228503397978556682713957621251054230795611775;
	weights[19] 	= 0.00001060017177251767206941474960925551511065768452717363413470521084042722511699877157457420896307921871640945512136402111;

	nodes[20] 	= -3.5846779931052283911921245084112091179504686191527709211442012328726391675454447242613571968282288980803209856707696310205501158;
	weights[20] 	= 9.4545385422855718099613817352508192937623002148381783357399785204813516027322188124797818423781395565760639450811851e-7;

	nodes[21] 	= 3.5846779931052283911921245084112091179504686191527709211442012328726391675454447242613571968282288980803209856707696310205501158;
	weights[21] 	= 9.4545385422855718099613817352508192937623002148381783357399785204813516027322188124797818423781395565760639450811851e-7;

	nodes[22] 	= -3.9478937115246548131694307227290147690495524146978936865926987776723417478368903599693702119425716158566758164038222171618654437;
	weights[22] 	= 6.24272450628149156017724749647637287855704516683125066852874417598622455365320388716251394256312563808094217314878196e-8;

	nodes[23] 	= 3.9478937115246548131694307227290147690495524146978936865926987776723417478368903599693702119425716158566758164038222171618654437;
	weights[23] 	= 6.24272450628149156017724749647637287855704516683125066852874417598622455365320388716251394256312563808094217314878196e-8;

	nodes[24] 	= -4.3183547234421126072963643391066371481824773228469150687361221474791317391412267027560818687807738374574228185371066268868341427;
	weights[24] 	= 2.98312101903962818240652916872558539649206799442567930178155397064491854604283418532308458813871319305790027783193512e-9;

	nodes[25] 	= 4.3183547234421126072963643391066371481824773228469150687361221474791317391412267027560818687807738374574228185371066268868341427;
	weights[25] 	= 2.98312101903962818240652916872558539649206799442567930178155397064491854604283418532308458813871319305790027783193512e-9;

	nodes[26] 	= -4.6974492230014397194356655581268696952391473731328126291747874972907279961572632996343506583202419064473481836767599479779378171;
	weights[26] 	= 1.00260007789091692082234905135067605223806718549452568417489396647406005615942015975330034399664313743982971831261118e-10;

	nodes[27] 	= 4.6974492230014397194356655581268696952391473731328126291747874972907279961572632996343506583202419064473481836767599479779378171;
	weights[27] 	= 1.00260007789091692082234905135067605223806718549452568417489396647406005615942015975330034399664313743982971831261118e-10;

	nodes[28] 	= -5.0869242297582532815571795544758449245424419581057328135482398401018329398438029729067352315573905918047305806315720502563351162;
	weights[28] 	= 2.2848078971220344472885303029823939985788749528593495213350734828404610032022721857131849413074772816397765781466979e-12;

	nodes[29] 	= 5.0869242297582532815571795544758449245424419581057328135482398401018329398438029729067352315573905918047305806315720502563351162;
	weights[29] 	= 2.2848078971220344472885303029823939985788749528593495213350734828404610032022721857131849413074772816397765781466979e-12;

	nodes[30] 	= -5.4890481838807427546851659821816955776722473264629164645811132829986028387166772109455109521411741993660415500043072041817984264;
	weights[30] 	= 3.3650356127922767510994574133486968484189365579310262256384845062665385643447680024503901064486284303640032573066554e-14;

	nodes[31] 	= 5.4890481838807427546851659821816955776722473264629164645811132829986028387166772109455109521411741993660415500043072041817984264;
	weights[31] 	= 3.3650356127922767510994574133486968484189365579310262256384845062665385643447680024503901064486284303640032573066554e-14;

	nodes[32] 	= -5.9068817590275462840908557417458025750944800320874186594789848750234075647262181418340103732215273481081903012500574185870989941;
	weights[32] 	= 3.0015214029808008167503192539505722712842567710019911579118920436040559465774176797438264406443569509460077296570946e-16;

	nodes[33] 	= 5.9068817590275462840908557417458025750944800320874186594789848750234075647262181418340103732215273481081903012500574185870989941;
	weights[33] 	= 3.0015214029808008167503192539505722712842567710019911579118920436040559465774176797438264406443569509460077296570946e-16;

	nodes[34] 	= -6.3447621648968922702271494824972072671793755642966077909769376439435469752615705059898059041498186312582663682746084434412201134;
	weights[34] 	= 1.47940997581716326503559916180083531397841904318185709138451077534233025960153433737944971667820201650984699264482313e-18;

	nodes[35] 	= 6.3447621648968922702271494824972072671793755642966077909769376439435469752615705059898059041498186312582663682746084434412201134;
	weights[35] 	= 1.47940997581716326503559916180083531397841904318185709138451077534233025960153433737944971667820201650984699264482313e-18;

	nodes[36] 	= -6.809255271535832815137982006071271655716331673034257506189385473467822708976192599050265484985826755644315755676213870314398683;
	weights[36] 	= 3.51214495583651836236053223060678188067713208884971807861923108670990022422237793404312045031014322049766010640344194e-21;

	nodes[37] 	= 6.809255271535832815137982006071271655716331673034257506189385473467822708976192599050265484985826755644315755676213870314398683;
	weights[37] 	= 3.51214495583651836236053223060678188067713208884971807861923108670990022422237793404312045031014322049766010640344194e-21;

	nodes[38] 	= -7.3112956789163310324680505208802255280679220601876620085811080926327180771215609670480939547282435184558988946494681742361655386;
	weights[38] 	= 3.20722169190500302562454237968398400260100279427358779531179833532626221640278292406970950159954740281854776422766631e-24;

	nodes[39] 	= 7.3112956789163310324680505208802255280679220601876620085811080926327180771215609670480939547282435184558988946494681742361655386;
	weights[39] 	= 3.20722169190500302562454237968398400260100279427358779531179833532626221640278292406970950159954740281854776422766631e-24;

	nodes[40] 	= -7.8721084427748514292136858704139390659679556193021427840026336842778684448043860416852658771945152938885008321163366200382325773;
	weights[40] 	= 7.362126104297101303938131751311485692445972089900894220704750869355490898212685072452924861846424588453363225449578963e-28;

	nodes[41] 	= 7.8721084427748514292136858704139390659679556193021427840026336842778684448043860416852658771945152938885008321163366200382325773;
	weights[41] 	= 7.362126104297101303938131751311485692445972089900894220704750869355490898212685072452924861846424588453363225449578963e-28;

	nodes[42] 	= -8.5473375667355391719186064920162137591035835814704698152940543194984307546455636544997556981247739168405111036036257467270328455;
	weights[42] 	= 1.4561153081762318946343927738932508332521616845250289765543754129535454444478995952239721805835443244499629651849055459e-32;

	nodes[43] 	= 8.5473375667355391719186064920162137591035835814704698152940543194984307546455636544997556981247739168405111036036257467270328455;
	weights[43] 	= 1.4561153081762318946343927738932508332521616845250289765543754129535454444478995952239721805835443244499629651849055459e-32;

}
#endif /*(__Gauss_Hermite_Nodes_and_Weights_44_hpp__)*/