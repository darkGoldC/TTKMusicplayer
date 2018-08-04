#include <qmmp/qmmp.h>
#include "visualplusxraysfactory.h"
#include "plusxrays.h"

const VisualProperties VisualPlusXRaysFactory::properties() const
{
    VisualProperties properties;
    properties.name = tr("Plus XRays Plugin");
    properties.shortName = "plusxrays";
    properties.hasSettings = true;
    properties.hasAbout = false;
    return properties;
}

Visual *VisualPlusXRaysFactory::create(QWidget *parent)
{
    return new PlusXRays(parent);
}
