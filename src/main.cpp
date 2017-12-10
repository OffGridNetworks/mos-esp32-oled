#include "mgos_arduino_ssd1306.h"

#ifdef __cplusplus
extern "C" {
#endif

void *atob(unsigned char *data, int inputLength) {
  void *result;
  int outputLength = ((inputLength)/4)*3;

  result = (void *) calloc(outputLength + 1, 1);
  cs_base64_decode(data, inputLength, (char *)result, NULL);
  return result;
}
  
void ssd1306_splash(Adafruit_SSD1306 *ssd, void *data) {
  if (ssd == nullptr) return;
  uint8_t * data_c = reinterpret_cast<uint8_t *>(data);
  int h = mgos_ssd1306_height(ssd);
  int w = mgos_ssd1306_width(ssd);
  ssd->clearDisplay();
  ssd->drawBitmap(0, 0, data_c, w, h, WHITE);
  ssd->display();
}

void ssd1306_drawBitmap(Adafruit_SSD1306 *ssd, void *data, int x, int y, int w, int h) {
  if (ssd == nullptr) return;
  uint8_t * data_c = reinterpret_cast<uint8_t *>(data);
  ssd->clearDisplay();
  ssd->drawBitmap(x, y, data_c, w, h, WHITE);
  ssd->display();
}

#ifdef __cplusplus
}
#endif
