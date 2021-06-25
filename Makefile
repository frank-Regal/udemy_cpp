.PHONY: clean All

All:
	@echo "----------Building project:[ section12_challenge2 - Debug ]----------"
	@cd "section12_challenge2" && "$(MAKE)" -f  "section12_challenge2.mk"
clean:
	@echo "----------Cleaning project:[ section12_challenge2 - Debug ]----------"
	@cd "section12_challenge2" && "$(MAKE)" -f  "section12_challenge2.mk" clean
