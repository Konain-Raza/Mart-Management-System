CREATE TABLE [dbo].[Credentials] (
    [Id]       INT        IDENTITY (1, 1) NOT NULL,
    [Username] NCHAR(40) NOT NULL UNIQUE,
    [Password] NCHAR(50) NOT NULL,
    [Email] NCHAR(100) NOT NULL UNIQUE, 
    PRIMARY KEY CLUSTERED ([Id] ASC),
    UNIQUE NONCLUSTERED ([Username] ASC),
    UNIQUE NONCLUSTERED ([Password] ASC)
);

