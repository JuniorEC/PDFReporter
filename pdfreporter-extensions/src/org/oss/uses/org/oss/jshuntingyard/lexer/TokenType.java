package org.oss.uses.org.oss.jshuntingyard.lexer;

import java.util.regex.Pattern;

public enum TokenType {
	BOOLEANVALUE("false|true", Pattern.CASE_INSENSITIVE),
	NULL("null", Pattern.CASE_INSENSITIVE),
	NAN("NaN"),
	FUNCTIONNAME("[A-Za-z]+([0-9])?"),
	DIGIT("([-])?([0-9]+(\\.\\d+)?)"),
	SINGLEQUOTED("\'[^\']*+\'"),
	COMMA(","),
	OPENBRACE("\\("),
	CLOSEBRACE("\\)"),
	OPERATOR("\\+|-|\\*|/|==|!=|\\^|\\%|\\|\\||<=|>=|<|>|&&|!"),
	VARIABLE("\\$([a-zA-Z0-9])+(([_])?([a-zA-Z0-9])*)*");

	private final Pattern pattern;

	TokenType(String regularExpression) {
		this.pattern = Pattern.compile(regularExpression);
	}

	TokenType(String regularExpression, int pattern) {
		this.pattern = Pattern.compile(regularExpression, pattern);
	}

	public Pattern pattern() {
		return pattern;
	}
}