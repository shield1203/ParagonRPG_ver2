#include "Title.h"
#include "UObject/ConstructorHelpers.h"
#include "Blueprint/UserWidget.h"

ATitle::ATitle()
{
	static ConstructorHelpers::FClassFinder<UUserWidget> MainwidgetClass(TEXT("/Game/2_UI/Title/WB_Title"));
	if (MainwidgetClass.Succeeded())
	{
		m_mainWidget = CreateWidget(GetWorld(), MainwidgetClass.Class);
	}
}