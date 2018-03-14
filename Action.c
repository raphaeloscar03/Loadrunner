Action()
{

	lr_start_transaction("Launch Website");
	
	web_url("Catalog.action;jsessionid=196A87211BA11C7B4259A9CBEBDF4CEC", 
		"URL=http://petstore.octoperf.com/actions/Catalog.action;jsessionid=196A87211BA11C7B4259A9CBEBDF4CEC", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=", 
		"Snapshot=t3.inf", 
		"Mode=HTML", 
		LAST);
	
	lr_end_transaction("Launch Website", LR_AUTO);

	lr_think_time(3);
	
	lr_start_transaction("Select Category");

	web_url("sm_fish.gif", 
		"URL=http://petstore.octoperf.com/actions/Catalog.action;jsessionid=196A87211BA11C7B4259A9CBEBDF4CEC?viewCategory=&categoryId=FISH", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://petstore.octoperf.com/actions/Catalog.action;jsessionid=196A87211BA11C7B4259A9CBEBDF4CEC", 
		"Snapshot=t4.inf", 
		"Mode=HTML", 
		LAST);
	
	lr_end_transaction("Select Category", LR_AUTO);
	
	lr_think_time(3);
	
	lr_start_transaction("Select Product");

	web_url("FI-SW-01", 
		"URL=http://petstore.octoperf.com/actions/Catalog.action;jsessionid=196A87211BA11C7B4259A9CBEBDF4CEC?viewProduct=&productId=FI-SW-01", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://petstore.octoperf.com/actions/Catalog.action;jsessionid=196A87211BA11C7B4259A9CBEBDF4CEC?viewCategory=&categoryId=FISH", 
		"Snapshot=t5.inf", 
		"Mode=HTML", 
		LAST);
	
	lr_end_transaction("Select Product", LR_AUTO);

	lr_think_time(3);

	lr_start_transaction("Add to Cart");	
	
	web_url("Add to Cart", 
		"URL=http://petstore.octoperf.com/actions/Cart.action;jsessionid=196A87211BA11C7B4259A9CBEBDF4CEC?addItemToCart=&workingItemId=EST-1", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://petstore.octoperf.com/actions/Catalog.action;jsessionid=196A87211BA11C7B4259A9CBEBDF4CEC?viewProduct=&productId=FI-SW-01", 
		"Snapshot=t6.inf", 
		"Mode=HTML", 
		LAST);

	lr_end_transaction("Add to Cart", LR_AUTO);
	

	return 0;
}