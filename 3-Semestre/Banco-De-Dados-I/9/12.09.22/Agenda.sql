create table agenda_agenda
(
	codigo int not null AUTO_INCREMENT,
	nome varchar (45) not null,
	primary key (codigo)
);

create table agenda_email
(
	email varchar (100) not null,
	codigo int not null,
	foreign key (codigo) references agenda_agenda (codigo)
);

create table agenda_telefone
(
	telefone int not null,
	codigo int not null,
	foreign key (codigo) references agenda_agenda (codigo)
);

drop table agenda_agenda, agenda_email, agenda_telefone