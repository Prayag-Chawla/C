CREATE TYPE my_keyspace.test (
    testid text,
    testdate text,
    testdata frozen<testdata>
);



CREATE TYPE my_keyspace.testdata (
    subject text,
    metadata text

);