find . -type f -name "*.sh" | xargs -n 1 basename | rev | cut -c4- | rev
