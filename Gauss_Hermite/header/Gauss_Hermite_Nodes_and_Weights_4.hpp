//
//        Gauss_Hermite_Nodes_and_Weights_4.hpp
//
//
//        Created by Sivaram Ambikasaran on 2014-02-22.09:42:47.
//
//
//        Array of nodes and weights for Gauss Hermite quadrature of order 4.
//
//

#ifndef __Gauss_Hermite_Nodes_and_Weights_4_hpp__
#define __Gauss_Hermite_Nodes_and_Weights_4_hpp__

void Gauss_Hermite_Nodes_and_Weights_4(long double*& nodes, long double*& weights) {
	nodes	= new long double[4];
	weights	= new long double[4];

	nodes[0] 	= -1.6506801238857845558833411111207455437894347069037757070303733233420577987787078173025504890355303329632650569484445875671056872;
	weights[0] 	= 0.0813128354472451771430345571898884117633329166383238185653457835780437185046101810520128567339117428058335263718744243601828113;

	nodes[1] 	= 1.6506801238857845558833411111207455437894347069037757070303733233420577987787078173025504890355303329632650569484445875671056872;
	weights[1] 	= 0.0813128354472451771430345571898884117633329166383238185653457835780437185046101810520128567339117428058335263718744243601828113;

	nodes[2] 	= -0.52464762327529031788406025383474134141357856516946337190186017544378521262517382363614555317225037100778636532401988987876932573;
	weights[2] 	= 0.8049140900055128365060491844806841796354418114228697455415581113484119237909059096354624716353605899022798854402668609729352651;

	nodes[3] 	= 0.52464762327529031788406025383474134141357856516946337190186017544378521262517382363614555317225037100778636532401988987876932573;
	weights[3] 	= 0.8049140900055128365060491844806841796354418114228697455415581113484119237909059096354624716353605899022798854402668609729352651;

}
#endif /*(__Gauss_Hermite_Nodes_and_Weights_4_hpp__)*/