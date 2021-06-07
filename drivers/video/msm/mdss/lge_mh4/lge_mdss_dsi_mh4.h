#ifndef LGE_MDSS_DSI_MH4
#define LGE_MDSS_DSI_MH4
void ili9881h_mdss_dsi_ctrl_shutdown(struct platform_device *pdev);
void ili9881h_panel_enter_deep_sleep(void);
void ili9881h_panel_exit_deep_sleep(void);
void ft8736_mdss_dsi_ctrl_shutdown(struct platform_device *pdev);
void ft8736_panel_enter_deep_sleep(void);
void ft8736_panel_exit_deep_sleep(void);
void hx83102d_mdss_dsi_ctrl_shutdown(struct platform_device *pdev);
void hx83102d_panel_enter_deep_sleep(void);
void hx83102d_panel_exit_deep_sleep(void);
#endif
