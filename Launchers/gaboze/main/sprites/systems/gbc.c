const uint16_t gbc[32][32] = {
	{27903,27903,27903,27903,27903,27903,27903,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,27903,27903,27903,27903,27903,27903,27903},
	{27903,27903,27903,27903,27903,27903,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,27903,27903,27903,27903,27903,27903},
	{27903,27903,27903,27903,27903,27903,65535,65535,27903,27903,27903,27903,27903,27903,27903,27903,27903,27903,27903,27903,27903,27903,27903,27903,65535,65535,27903,27903,27903,27903,27903,27903},
	{27903,27903,27903,27903,27903,27903,65535,65535,27903,27903,27903,27903,27903,27903,27903,27903,27903,27903,27903,27903,27903,27903,27903,27903,65535,65535,27903,27903,27903,27903,27903,27903},
	{27903,27903,27903,27903,27903,27903,65535,65535,27903,27903,27903,27903,27903,27903,27903,27903,27903,27903,27903,27903,27903,27903,27903,27903,65535,65535,27903,27903,27903,27903,27903,27903},
	{27903,27903,27903,27903,27903,27903,65535,65535,27903,27903,27903,27903,27903,27903,27903,27903,27903,27903,27903,27903,27903,27903,27903,27903,65535,65535,27903,27903,27903,27903,27903,27903},
	{27903,27903,27903,27903,27903,27903,65535,65535,27903,27903,27903,27903,27903,27903,27903,27903,27903,27903,27903,27903,27903,27903,27903,27903,65535,65535,27903,27903,27903,27903,27903,27903},
	{27903,27903,27903,27903,27903,27903,65535,65535,27903,27903,27903,27903,27903,27903,27903,27903,27903,27903,27903,27903,27903,27903,27903,27903,65535,65535,27903,27903,27903,27903,27903,27903},
	{27903,27903,27903,27903,27903,27903,65535,65535,27903,27903,27903,27903,27903,27903,27903,27903,27903,27903,27903,27903,27903,27903,27903,27903,65535,65535,27903,27903,27903,27903,27903,27903},
	{27903,27903,27903,27903,27903,27903,65535,65535,27903,27903,27903,27903,27903,27903,27903,27903,27903,27903,27903,27903,27903,27903,27903,27903,65535,65535,27903,27903,27903,27903,27903,27903},
	{27903,27903,27903,27903,27903,27903,65535,65535,27903,27903,27903,27903,27903,27903,27903,27903,27903,27903,27903,27903,27903,27903,27903,27903,65535,65535,27903,27903,27903,27903,27903,27903},
	{27903,27903,27903,27903,27903,27903,65535,65535,27903,27903,27903,27903,27903,27903,27903,27903,27903,27903,27903,27903,27903,27903,27903,27903,65535,65535,27903,27903,27903,27903,27903,27903},
	{27903,27903,27903,27903,27903,27903,65535,65535,27903,27903,27903,27903,27903,27903,27903,27903,27903,27903,27903,27903,27903,27903,27903,27903,65535,65535,27903,27903,27903,27903,27903,27903},
	{27903,27903,27903,27903,27903,27903,65535,65535,27903,27903,27903,27903,27903,27903,27903,27903,27903,27903,27903,27903,27903,27903,27903,27903,65535,65535,27903,27903,27903,27903,27903,27903},
	{27903,27903,27903,27903,27903,27903,65535,65535,65535,27903,27903,27903,27903,27903,27903,27903,27903,27903,27903,27903,27903,27903,27903,65535,65535,65535,27903,27903,27903,27903,27903,27903},
	{27903,27903,27903,27903,27903,27903,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,27903,27903,27903,27903,27903,27903},
	{27903,27903,27903,27903,27903,27903,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,27903,27903,27903,27903,27903,27903},
	{27903,27903,27903,27903,27903,27903,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,27903,27903,27903,27903,27903,27903},
	{27903,27903,27903,27903,27903,27903,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,27903,27903,27903,27903,27903,27903},
	{27903,27903,27903,27903,27903,27903,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,27903,65535,65535,27903,27903,27903,27903,27903,27903},
	{27903,27903,27903,27903,27903,27903,65535,65535,65535,27903,27903,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,27903,27903,27903,65535,27903,27903,27903,27903,27903,27903},
	{27903,27903,27903,27903,27903,27903,65535,65535,27903,27903,27903,27903,65535,65535,65535,65535,65535,65535,65535,27903,65535,65535,65535,27903,65535,65535,27903,27903,27903,27903,27903,27903},
	{27903,27903,27903,27903,27903,27903,65535,65535,27903,27903,27903,27903,65535,65535,65535,65535,65535,65535,27903,27903,27903,65535,65535,65535,65535,65535,27903,27903,27903,27903,27903,27903},
	{27903,27903,27903,27903,27903,27903,65535,65535,65535,27903,27903,65535,65535,65535,65535,65535,65535,65535,65535,27903,65535,65535,65535,65535,65535,65535,27903,27903,27903,27903,27903,27903},
	{27903,27903,27903,27903,27903,27903,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,27903,27903,27903,27903,27903,27903},
	{27903,27903,27903,27903,27903,27903,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,27903,27903,27903,27903,27903,27903},
	{27903,27903,27903,27903,27903,27903,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,27903,27903,27903,27903,27903,27903},
	{27903,27903,27903,27903,27903,27903,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,27903,27903,27903,27903,27903,27903},
	{27903,27903,27903,27903,27903,27903,65535,65535,65535,65535,65535,65535,65535,27903,27903,65535,27903,27903,65535,65535,65535,65535,65535,65535,65535,65535,27903,27903,27903,27903,27903,27903},
	{27903,27903,27903,27903,27903,27903,27903,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,27903,27903,27903,27903,27903,27903,27903},
	{27903,27903,27903,27903,27903,27903,27903,27903,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,27903,27903,27903,27903,27903,27903,27903,27903},
	{27903,27903,27903,27903,27903,27903,27903,27903,27903,27903,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,27903,27903,27903,27903,27903,27903,27903,27903,27903,27903}
};