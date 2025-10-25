#include "FormattedTextNode.h"

UFormattedTextNode::UFormattedTextNode() {
    this->Type = EFormattedTextNodeType::Invalid;
    this->bIncludeLeadingZero = false;
    this->float = 0.00f;
    this->Integer = 0;
    this->Precision = 0;
    this->BaseNode = NULL;
}


