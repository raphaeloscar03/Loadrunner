Action()
{

	web_url("Catalog.action;jsessionid=196A87211BA11C7B4259A9CBEBDF4CEC", 
		"URL=http://petstore.octoperf.com/actions/Catalog.action;jsessionid=196A87211BA11C7B4259A9CBEBDF4CEC", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=", 
		"Snapshot=t3.inf", 
		"Mode=HTML", 
		LAST);

	/* Select Fish */

	lr_think_time(14);

	web_url("sm_fish.gif", 
		"URL=http://petstore.octoperf.com/actions/Catalog.action;jsessionid=196A87211BA11C7B4259A9CBEBDF4CEC?viewCategory=&categoryId=FISH", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://petstore.octoperf.com/actions/Catalog.action;jsessionid=196A87211BA11C7B4259A9CBEBDF4CEC", 
		"Snapshot=t4.inf", 
		"Mode=HTML", 
		LAST);

	/* Select product */

	lr_think_time(9);

	web_url("FI-SW-01", 
		"URL=http://petstore.octoperf.com/actions/Catalog.action;jsessionid=196A87211BA11C7B4259A9CBEBDF4CEC?viewProduct=&productId=FI-SW-01", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://petstore.octoperf.com/actions/Catalog.action;jsessionid=196A87211BA11C7B4259A9CBEBDF4CEC?viewCategory=&categoryId=FISH", 
		"Snapshot=t5.inf", 
		"Mode=HTML", 
		LAST);

	/* Click Add to cart */

	web_url("Add to Cart", 
		"URL=http://petstore.octoperf.com/actions/Cart.action;jsessionid=196A87211BA11C7B4259A9CBEBDF4CEC?addItemToCart=&workingItemId=EST-1", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://petstore.octoperf.com/actions/Catalog.action;jsessionid=196A87211BA11C7B4259A9CBEBDF4CEC?viewProduct=&productId=FI-SW-01", 
		"Snapshot=t6.inf", 
		"Mode=HTML", 
		LAST);

	/* click proceed to check out */

	lr_think_time(12);

	web_url("Proceed to Checkout", 
		"URL=http://petstore.octoperf.com/actions/Order.action;jsessionid=196A87211BA11C7B4259A9CBEBDF4CEC?newOrderForm=", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://petstore.octoperf.com/actions/Cart.action;jsessionid=196A87211BA11C7B4259A9CBEBDF4CEC?addItemToCart=&workingItemId=EST-1", 
		"Snapshot=t7.inf", 
		"Mode=HTML", 
		LAST);

	/* click login */

	web_submit_data("Account.action;jsessionid=196A87211BA11C7B4259A9CBEBDF4CEC", 
		"Action=http://petstore.octoperf.com/actions/Account.action;jsessionid=196A87211BA11C7B4259A9CBEBDF4CEC", 
		"Method=POST", 
		"TargetFrame=", 
		"RecContentType=text/html", 
		"Referer=http://petstore.octoperf.com/actions/Order.action;jsessionid=196A87211BA11C7B4259A9CBEBDF4CEC?newOrderForm=", 
		"Snapshot=t8.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=username", "Value=j2ee", ENDITEM, 
		"Name=password", "Value=j2ee", ENDITEM, 
		"Name=signon", "Value=Login", ENDITEM, 
		"Name=_sourcePage", "Value=hXoKBLTxEpa0lXS4vxD5i9ALa0GScuGthmpmYNfIaBJFM3w8lW9rYA==", ENDITEM, 
		"Name=__fp", "Value=vavJ6ZCRVTQ=", ENDITEM, 
		LAST);

	/* click cart */

	lr_think_time(12);

	web_url("cart.gif", 
		"URL=http://petstore.octoperf.com/actions/Cart.action;jsessionid=196A87211BA11C7B4259A9CBEBDF4CEC?viewCart=", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://petstore.octoperf.com/actions/Catalog.action;jsessionid=196A87211BA11C7B4259A9CBEBDF4CEC", 
		"Snapshot=t9.inf", 
		"Mode=HTML", 
		LAST);

	/* click signout */

	web_url("Sign Out", 
		"URL=http://petstore.octoperf.com/actions/Account.action;jsessionid=196A87211BA11C7B4259A9CBEBDF4CEC?signoff=", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://petstore.octoperf.com/actions/Cart.action;jsessionid=196A87211BA11C7B4259A9CBEBDF4CEC?viewCart=", 
		"Snapshot=t10.inf", 
		"Mode=HTML", 
		LAST);

	return 0;
}