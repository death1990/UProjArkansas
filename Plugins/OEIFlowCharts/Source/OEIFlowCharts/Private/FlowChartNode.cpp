#include "FlowChartNode.h"

FFlowChartNode::FFlowChartNode() {
    this->NodeID = 0;
    this->ContainerNodeID = 0;
    this->NodeType = EFlowChartNodeType::Talk;
    this->ConditionalIndex = 0;
}

