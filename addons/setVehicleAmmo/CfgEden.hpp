class ctrlToolbox;
class ctrlStatic;
class ctrlListNBox;
class ctrlTree;
class ctrlXSliderH;


class Cfg3DEN {
    class Attributes {
        class Default;
        class TitleWide: Default {
            class Controls {
                class Title;
            };
        };
        class GVAR(vehAmmoAttribute): TitleWide {
            attributeLoad = QUOTE([ARR_2(_this, _value)] call FUNC(attributeLoad));
            attributeSave = QUOTE([_this] call FUNC(attributeSave));

            h = "(15 * 	5 + 1) * (pixelH * pixelGrid * 0.25)";
            class Controls: Controls {
                class Type: ctrlToolbox {
                    idc = 100;
                    x = "5 * (pixelW * pixelGrid * 0.25)";
                    y = "0 * 	5 * (pixelH * pixelGrid * 0.25)";
                    w = "(	48 + 	82 - 	5) * (pixelW * pixelGrid * 0.25)";
                    h = "1 * 	5 * (pixelH * pixelGrid * 0.25)";
                    rows = 1;
                    columns = 2;
                    strings[] = {"Default","Custom"};
                };
                class ListBackground: ctrlStatic {
                    x = "5 * (pixelW * pixelGrid * 0.25)";
                    y = "1 * 	5 * (pixelH * pixelGrid * 0.25)";
                    w = "(	48 + 	82 - 	5) * (pixelW * pixelGrid * 0.25)";
                    h = "13 * 	5 * (pixelH * pixelGrid * 0.25)";
                    colorBackground[] = {1,1,1,0.1};
                };
                class List: ctrlTree {
                    idc = 101;
                    x = "5 * (pixelW * pixelGrid * 0.25)";
                    y = "1 * 	5 * (pixelH * pixelGrid * 0.25)";
                    w = "(	48 + 	82 - 	5) * (pixelW * pixelGrid * 0.25)";
                    h = "13 * 	5 * (pixelH * pixelGrid * 0.25)";
                };
                class ammoSlider: ctrlXSliderH {
                    idc = 102;
                    x = "5 * (pixelW * pixelGrid * 0.25)";
                    y = "14 * 	5 * (pixelH * pixelGrid * 0.25)";
                    w = "(	48 + 	82 - 	5) * (pixelW * pixelGrid * 0.25)";
                    h = "1 * 	5 * (pixelH * pixelGrid * 0.25)";
                };
            };
        };
    };

    class Object {
        class AttributeCategories {
            class ADDON {
                displayName = "POTATO: Set Vehicle Ammo";
                collapsed = 1;
                class Attributes {
                    class ADDON {
                        displayName = "Set Vehicle Ammo";
                        tooltip = "";
                        property = QGVAR(vehAmmoAttribute);
                        control = QGVAR(vehAmmoAttribute);
                        defaultValue = "";
                        typeName = "STRING";
                        expression = QUOTE([ARR_2(_this,_value)] call FUNC(initVehicle));
                        condition = "objectVehicle";
                    };
                };
            };
        };
    };
};
