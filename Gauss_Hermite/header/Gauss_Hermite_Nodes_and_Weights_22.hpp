//
//        Gauss_Hermite_Nodes_and_Weights_22.hpp
//
//
//        Created by Sivaram Ambikasaran on 2014-02-22.09:42:47.
//
//
//        Array of nodes and weights for Gauss Hermite quadrature of order 22.
//
//

#ifndef __Gauss_Hermite_Nodes_and_Weights_22_hpp__
#define __Gauss_Hermite_Nodes_and_Weights_22_hpp__

void Gauss_Hermite_Nodes_and_Weights_22(long double*& nodes, long double*& weights) {
	nodes	= new long double[22];
	weights	= new long double[22];

	nodes[0] 	= -0.23417913993099063509831078268364160583055661222311841236178640026853177028729777571532461339962552858275922596626606274236325658;
	weights[0] 	= 0.4435452264349593014470046381859233020209501378303495698482282216505612135655940886472503109089428992711712462121797677927574932;

	nodes[1] 	= 0.23417913993099063509831078268364160583055661222311841236178640026853177028729777571532461339962552858275922596626606274236325658;
	weights[1] 	= 0.4435452264349593014470046381859233020209501378303495698482282216505612135655940886472503109089428992711712462121797677927574932;

	nodes[2] 	= -0.70368609717000693216644843204601964807932136733780483441844376431806087930987245513864715062142152273107962683964853115254364551;
	weights[2] 	= 0.286971433246907114401021479221495736418540279318667771011717251140867258398618488545632115026190276003710794233119801060117003;

	nodes[3] 	= 0.70368609717000693216644843204601964807932136733780483441844376431806087930987245513864715062142152273107962683964853115254364551;
	weights[3] 	= 0.286971433246907114401021479221495736418540279318667771011717251140867258398618488545632115026190276003710794233119801060117003;

	nodes[4] 	= -1.1767139584812444474228252666694401570372055998254777222603374098804040645384057128369346855096199757840082152357812195306757296;
	weights[4] 	= 0.11910236095878246597425244334523906103360388861378269842710189424995524390846604841541090913934083780936793474160288622061629;

	nodes[5] 	= 1.1767139584812444474228252666694401570372055998254777222603374098804040645384057128369346855096199757840082152357812195306757296;
	weights[5] 	= 0.11910236095878246597425244334523906103360388861378269842710189424995524390846604841541090913934083780936793474160288622061629;

	nodes[6] 	= -1.6558743732864224954377101097108778597874446917738899590715830532440054001218397699389844002047520438636865581232219538336751005;
	weights[6] 	= 0.0311403708844238483006993215487727156976205458222309592176238039414925443495071135166188248897477494362379800653843556099061;

	nodes[7] 	= 1.6558743732864224954377101097108778597874446917738899590715830532440054001218397699389844002047520438636865581232219538336751005;
	weights[7] 	= 0.0311403708844238483006993215487727156976205458222309592176238039414925443495071135166188248897477494362379800653843556099061;

	nodes[8] 	= -2.1442335927985344636196426065422870130572693114606780392645372629728356374649176575101212737597368532605795092832874300096596865;
	weights[8] 	= 0.00497839933505164740474138877377005125669795240512990515726496366883601404964268053500935247165905956416529573723702466177532;

	nodes[9] 	= 2.1442335927985344636196426065422870130572693114606780392645372629728356374649176575101212737597368532605795092832874300096596865;
	weights[9] 	= 0.00497839933505164740474138877377005125669795240512990515726496366883601404964268053500935247165905956416529573723702466177532;

	nodes[10] 	= -2.64563744105817270079842723900833493669057510838217746642346850130162924420873914274237416984234739787443780484083655630263762;
	weights[10] 	= 0.00046488505088425224418202549318284120078506012766199145925236819465814782383042363033263699109400469394659543373565303019475;

	nodes[11] 	= 2.64563744105817270079842723900833493669057510838217746642346850130162924420873914274237416984234739787443780484083655630263762;
	weights[11] 	= 0.00046488505088425224418202549318284120078506012766199145925236819465814782383042363033263699109400469394659543373565303019475;

	nodes[12] 	= -3.165265909202137446987186492058512870355694711612836761620414434709049372970890661649603683852348574494336465242118064484584159;
	weights[12] 	= 0.000023655128552510458047353744040972242296229404652054824163086316871008480991898805973834538316762893077573580113604286947713;

	nodes[13] 	= 3.165265909202137446987186492058512870355694711612836761620414434709049372970890661649603683852348574494336465242118064484584159;
	weights[13] 	= 0.000023655128552510458047353744040972242296229404652054824163086316871008480991898805973834538316762893077573580113604286947713;

	nodes[14] 	= -3.7107015328778049148091775729098523756684320031693318650806237239628940808908465408061748249156500880149784704146161500661761547;
	weights[14] 	= 5.884287563301005780415851103731181156540520976538707094115860742556764153581739884219552552346537338033937772772922424413e-7;

	nodes[15] 	= 3.7107015328778049148091775729098523756684320031693318650806237239628940808908465408061748249156500880149784704146161500661761547;
	weights[15] 	= 5.884287563301005780415851103731181156540520976538707094115860742556764153581739884219552552346537338033937772772922424413e-7;

	nodes[16] 	= -4.2943124805931615157503079405989035170653750123948621842745005077913154068452317368163746154832305813561966030139375893186200824;
	weights[16] 	= 5.966990986059652717281370415326945453924456678726127331091931500413921478037633481299208215186207282151815841960075222113e-9;

	nodes[17] 	= 4.2943124805931615157503079405989035170653750123948621842745005077913154068452317368163746154832305813561966030139375893186200824;
	weights[17] 	= 5.966990986059652717281370415326945453924456678726127331091931500413921478037633481299208215186207282151815841960075222113e-9;

	nodes[18] 	= -4.9398341310601758878702132514204541163774544826686628812996214357734150000542546497251246164544377295919126109315768579967852689;
	weights[18] 	= 1.7443390075479928442831846052882320598233839339660540433237217856424927575445372348369138564529899135924392878039271065175e-11;

	nodes[19] 	= 4.9398341310601758878702132514204541163774544826686628812996214357734150000542546497251246164544377295919126109315768579967852689;
	weights[19] 	= 1.7443390075479928442831846052882320598233839339660540433237217856424927575445372348369138564529899135924392878039271065175e-11;

	nodes[20] 	= -5.7092013532052637773593430781167541632216962271197050213877666255509058718614188694534492141104700231970808933200396362105220837;
	weights[20] 	= 6.1671834244040488352770303372059639304422250550226519712377721035848041800688011481546319650071272506805404464722978887719e-15;

	nodes[21] 	= 5.7092013532052637773593430781167541632216962271197050213877666255509058718614188694534492141104700231970808933200396362105220837;
	weights[21] 	= 6.1671834244040488352770303372059639304422250550226519712377721035848041800688011481546319650071272506805404464722978887719e-15;

}
#endif /*(__Gauss_Hermite_Nodes_and_Weights_22_hpp__)*/