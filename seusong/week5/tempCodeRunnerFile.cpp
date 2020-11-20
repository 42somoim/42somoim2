	i = 0;
	while(ans){
		res[i++] = ans % 8;
		ans /= 8;
	}
	reverse(res.begin(), res.end());
	for(int o : res)
		cout << o;