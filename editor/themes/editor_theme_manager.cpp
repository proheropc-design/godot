// ==========================================
// CUSTOM FRIENDLY UI PATCH FOR GODOT EDITOR
// ==========================================

// 1. Base font aur icons ka size bada aur clear karein
p_theme->set_default_font_size(18 * p_scale);

// 2. Extra spacing aur touch-friendly padding add karein
p_theme->set_constant("margin", "MarginContainer", 12 * p_scale);
p_theme->set_constant("h_separation", "BoxContainer", 10 * p_scale);
p_theme->set_constant("v_separation", "BoxContainer", 10 * p_scale);

// 3. Touch / Mobile-friendly button sizes
p_theme->set_constant("minimum_character_width", "LineEdit", 12);
p_theme->set_constant("icon_max_width", "Button", 32 * p_scale);

// 4. Cluttered borders aur sharp boxes ko smooth rounded look dena
p_theme->set_stylebox("panel", "Panel", create_rounded_stylebox(Color(0.12, 0.13, 0.15), 8.0));
