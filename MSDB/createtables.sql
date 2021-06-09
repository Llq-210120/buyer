create table user
	(id	 	varchar(8), 
	 pswd		varchar(8), 
	 role		varchar(20),
	 date		varchar(20),
	 primary key (id)
	);

create table seller
	(id		varchar(8), 
	 name		varchar(40), 
	 primary key (id)£¬
	 foreign key (id) references user(id)
	);
	
create table buyer
	(id		varchar(8), 
	 name		varchar(40), 
	 primary key (id),
	 foreign key (id) references user(id)
	);

create table store
	(id			varchar(8), 
	 seller_id		varchar(8), 
	 name		varchar(40), 
	 primary key (id),
	 foreign key (seller_id) references seller(id)
	);

create table book
	(id			varchar(8), 
	 store_id		varchar(8),
	 name		varchar(40), 
	 type		varchar(20),
	 primary key(id),
	 foreign key(store_id) references store(id)
	);


create table shopping_cart
	(buyer_id	varchar(8), 
	 book_id	varchar(8),
	 number	varchar(8), 
	 time	varchar(10),
	 primary key(buyer_id, book_id),
	 foreign key(buyer_id) references buyer(id),
	 foreign key(book_id) references book(id)
	);