#include "LogicalStatement.h"

FLogicalStatement::FLogicalStatement() {
    this->Operator = ELogicalOperator::And;
    this->ConditionalType = EConditionalType::GlobalVar;
}

