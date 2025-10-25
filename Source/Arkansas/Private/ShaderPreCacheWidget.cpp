#include "ShaderPreCacheWidget.h"

UShaderPreCacheWidget::UShaderPreCacheWidget() {
    this->SkipTime = 1.00f;
    this->ShaderCacheProgress = NULL;
    this->SkipCompilationButton = NULL;
}

void UShaderPreCacheWidget::OnSkipTimerComplete() {
}

bool UShaderPreCacheWidget::IsCompilingShaders() const {
    return false;
}


