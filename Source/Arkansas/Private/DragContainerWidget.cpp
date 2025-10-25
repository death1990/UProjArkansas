#include "DragContainerWidget.h"

UDragContainerWidget::UDragContainerWidget() : UUserWidget(FObjectInitializer::Get()) {
    this->OperationClass = NULL;
    this->NamedSlot = NULL;
}

void UDragContainerWidget::OnOperationDrop(UDragDropOperation* Operation) {
}

void UDragContainerWidget::OnOperationDragCancelled(UDragDropOperation* Operation) {
}







