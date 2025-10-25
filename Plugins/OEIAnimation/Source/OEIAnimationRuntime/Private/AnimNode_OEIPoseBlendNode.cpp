#include "AnimNode_OEIPoseBlendNode.h"

FAnimNode_OEIPoseBlendNode::FAnimNode_OEIPoseBlendNode() {
    this->Alpha = 0.00f;
    this->LODThreshold = 0;
    this->AlphaInputType = EAnimAlphaInputType::Float;
    this->bAlphaBoolEnabled = false;
}

