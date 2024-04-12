CREATE TABLE [dbo].[Products] (
    [Id]           INT          NOT NULL IDENTITY,
    [Barcode]      VARCHAR (12) NOT NULL,
    [Product Name] VARCHAR (30) NOT NULL,
    [Quantity]     INT          NOT NULL,
    [Price]        INT          NOT NULL,
    PRIMARY KEY CLUSTERED ([Id] ASC),
    UNIQUE NONCLUSTERED ([Product Name] ASC),
    UNIQUE NONCLUSTERED ([Barcode] ASC)
);

