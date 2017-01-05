//
//        Gauss_Hermite_Nodes_and_Weights_5.hpp
//
//
//        Created by Sivaram Ambikasaran on 2014-02-22.09:42:47.
//
//
//        Array of nodes and weights for Gauss Hermite quadrature of order 5.
//
//

#ifndef __Gauss_Hermite_Nodes_and_Weights_5_hpp__
#define __Gauss_Hermite_Nodes_and_Weights_5_hpp__

void Gauss_Hermite_Nodes_and_Weights_5(long double*& nodes, long double*& weights) {
	nodes	= new long double[5];
	weights	= new long double[5];

	nodes[0] 	= 0;
	weights[0] 	= 0.9453087204829418812256893244486107641586930432652731350473641545882193517818838300666403502605571548886543059329507043553259482;

	nodes[1] 	= -2.0201828704560856329287240881446451470522321474650473926832631624059913801840332042107317658799264761135249749447312173763889686;
	weights[1] 	= 0.01995324205904591320774345859417357486456997737391905612633246236109687061389082201586476536867736516716930707035108994287574425;

	nodes[2] 	= 2.0201828704560856329287240881446451470522321474650473926832631624059913801840332042107317658799264761135249749447312173763889686;
	weights[2] 	= 0.01995324205904591320774345859417357486456997737391905612633246236109687061389082201586476536867736516716930707035108994287574425;

	nodes[3] 	= -0.95857246461381850711277059389298831818608885525818853158614350730249603342913294302160499782745902460862791192023662109941615963;
	weights[3] 	= 0.3936193231522411598284956208520936344548582290546379404568893552712490957906833536382903878703163900966169517753148432125793581;

	nodes[4] 	= 0.95857246461381850711277059389298831818608885525818853158614350730249603342913294302160499782745902460862791192023662109941615963;
	weights[4] 	= 0.3936193231522411598284956208520936344548582290546379404568893552712490957906833536382903878703163900966169517753148432125793581;

}
#endif /*(__Gauss_Hermite_Nodes_and_Weights_5_hpp__)*/