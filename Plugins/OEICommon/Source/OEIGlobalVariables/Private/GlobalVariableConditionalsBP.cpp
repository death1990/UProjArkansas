#include "GlobalVariableConditionalsBP.h"

UGlobalVariableConditionalsBP::UGlobalVariableConditionalsBP() {
}

bool UGlobalVariableConditionalsBP::IsGlobalValue(FGuid Variable, EComparisonOperator Operator, int32 Value, EBoolResult& OutResult) {
    return false;
}

int32 UGlobalVariableConditionalsBP::GetGlobalValue(FGuid Variable) {
    return 0;
}

bool UGlobalVariableConditionalsBP::CompareGlobals(FGuid Variable1, EComparisonOperator Operator, FGuid Variable2, EBoolResult& OutResult) {
    return false;
}


