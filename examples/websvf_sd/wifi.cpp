// At boot it will attempt to connect as client.
// If this attempt fails, it will become AP.
// Same ssid/password apply for client and AP.

char host_name[32] = "websvf"; // request local name when connected as client, same as ssid
char ssid[32] = "ra";
char password[32] = "GigabyteBrix"; // >=8 chars or "" for open access
