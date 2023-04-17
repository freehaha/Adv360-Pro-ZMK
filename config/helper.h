#define ZMK_COMBO(name, combo_bindings, keypos, combo_layers, combo_timeout) \
    / { \
        combos { \
            compatible = "zmk,combos"; \
            combo_ ## name { \
                timeout-ms = <combo_timeout>; \
                bindings = <combo_bindings>; \
                key-positions = <keypos>; \
                layers = <combo_layers>; \
                COMBO_HOOK \
            }; \
        }; \
    };
