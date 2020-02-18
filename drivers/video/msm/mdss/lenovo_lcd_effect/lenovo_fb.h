
#ifndef LENOVO_FB_H
#define LENOVO_FB_H






//ssize_t lenovo_fb_get_panel_name(struct device *dev, struct device_attribute *attr, char *buf);
//ssize_t lenovo_fb_get_cabc(struct device *dev, struct device_attribute *attr, char *buf);
//ssize_t lenovo_fb_set_cabc(struct device *dev, struct device_attribute *attr,const char *buf, size_t count);
ssize_t lenovo_fb_get_lcd_supported_effect(struct device *dev, struct device_attribute *attr, char *buf);
ssize_t lenovo_fb_get_lcd_supported_mode(struct device *dev, struct device_attribute *attr, char *buf);
//ssize_t lenovo_fb_get_ce(struct device *dev, struct device_attribute *attr,char *buf);
//ssize_t lenovo_fb_set_ce(struct device *dev, struct device_attribute *attr,const char *buf, size_t count);
ssize_t lenovo_fb_get_mode(struct device *dev, struct device_attribute *attr,char *buf);
ssize_t lenovo_fb_set_mode(struct device *dev, struct device_attribute *attr,const char *buf, size_t count);
ssize_t lenovo_fb_get_effect(struct device *dev, struct device_attribute *attr,char *buf);
ssize_t lenovo_fb_set_effect(struct device *dev, struct device_attribute *attr,const char *buf, size_t count);
//ssize_t lenovo_fb_get_dimming(struct device *dev, struct device_attribute *attr, char *buf);
//ssize_t lenovo_fb_set_dimming(struct device *dev, struct device_attribute *attr,const char *buf, size_t count);
//ssize_t lenovo_fb_get_bl_gpio_level(struct device *dev, struct device_attribute *attr, char *buf);
//ssize_t lenovo_fb_set_bl_gpio_level(struct device *dev, struct device_attribute *attr,const char *buf, size_t count);
ssize_t lenovo_fb_get_effect_index(struct device *dev, struct device_attribute *attr, char *buf);
ssize_t lenovo_fb_set_effect_index(struct device *dev, struct device_attribute *attr,const char *buf, size_t count);
//ssize_t lenovo_fb_get_lcd_effect_debug_onoff(struct device *dev, struct device_attribute *attr,char *buf);
//ssize_t lenovo_fb_set_lcd_effect_debug_onoff(struct device *dev, struct device_attribute *attr,const char *buf, size_t count);


int lenovo_fb_lcd_effect_handle(struct msm_fb_data_type *mfd,struct hal_panel_ctrl_data *ctrl_data);












#endif
